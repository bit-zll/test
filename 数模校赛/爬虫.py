# 导入相关模块
import openpyxl
import requests
import time

# 记录爬虫开始的时间
start = time.time()
# 需要爬取的网址、反爬虫头部信息、国家信息、保存结果的excel文件路径
urlList = [
    # 美国疫情网址
    "https://api.inews.qq.com/newsqa/v1/automation/foreign/daily/list?country=%E7%BE%8E%E5%9B%BD&",
    # 意大利疫情网址
    "https://api.inews.qq.com/newsqa/v1/automation/foreign/daily/list?country=%E6%84%8F%E5%A4%A7%E5%88%A9&",
    # 法国疫情网址
    "https://api.inews.qq.com/newsqa/v1/automation/foreign/daily/list?country=%E6%B3%95%E5%9B%BD&",
    # 澳大利亚疫情网址
    "https://api.inews.qq.com/newsqa/v1/automation/foreign/daily/list?country=%E6%BE%B3%E5%A4%A7%E5%88%A9%E4%BA%9A&",
    # 韩国疫情网址
    "https://api.inews.qq.com/newsqa/v1/automation/foreign/daily/list?country=%E9%9F%A9%E5%9B%BD&",
    # 印度疫情网址
    "https://api.inews.qq.com/newsqa/v1/automation/foreign/daily/list?country=%E5%8D%B0%E5%BA%A6&"
]
headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) "
                  "Chrome/83.0.4103.61 Safari/537.36 "
}
countryNameList = ["American",
                   "Italy",
                   "France",
                   "Australia",
                   "Korea",
                   "India"
                   ]


# 爬取数据并将数据进行保存
def dataSavedFunction(url):
    # 获取json文件并将文件转化为列表/字典格式
    response = requests.get(url, headers=headers)
    jsonResponse = response.json()
    # 遍历json处理后的数据并将相关数据添加到相应的空列表
    dataCollection = []
    for result in jsonResponse["data"]:
        dataCollection.append([
            result["date"],
            result["confirm"],
            result["dead"],
            result["heal"],
            result["confirm_add"]
        ])
    return dataCollection


# 将数据写入excel表格中
try:
    def dataToExcel():
        # 读入一个空白excel文件
        wb = openpyxl.Workbook()
        for name in countryNameList:
            wb_sheet = wb.create_sheet(name)
            wb_sheet.append(["日期", "累积确诊", "累积死亡", "累计治愈", "现有新增确诊"])
            # 获取name的索引
            nameIndex = countryNameList.index(name)
            rows = dataSavedFunction(urlList[nameIndex])
            for j in rows:
                wb_sheet.append(j)
        # 保存相关文件内容
        wb.save("totalCrawlResult.xlsx")
        wb.close()
except PermissionError:
    print("文件读写错误！该文件已经被打开，请关掉文件再试")

# 主函数调用
if __name__ == "__main__":
    dataToExcel()
    end = time.time()
    print("本次爬虫历时：", end - start, "秒")

