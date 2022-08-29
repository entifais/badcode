def solve(values,oldstr,newstr=""):
	if oldstr == "":
		print(newstr)
	for i in values:
		ans=oldstr.find(values[i])
		if ans!=-1:#found it
			oldstr=oldstr[ans+len(values[i]):]#oldstr.replace(values[i],"")
			newstr+=i
			solve(values,oldstr,newstr)
def main():
	times=int(input())
	while times:# by default if is 0 stop
		values={}
		for i in range(times):
			key,value=input().split()
			values[key]=value
		string=input()
		solve(values,string,newstr="")
		times=int(input())

main()