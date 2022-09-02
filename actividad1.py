def solve(values,oldstr,newstr=""):
	if oldstr == "":
		print(newstr)
	else:
		for ii in values:
			ans=oldstr.find(values[ii])
			if ans!=-1 :#and valid:#found it
				oldstr=oldstr[ans+len(values[ii]):]
				newstr+=ii
				solve(values,oldstr,newstr)

def main():
	times=int(input())
	cnt=0
	while times:# by default if is 0 stop
		values={}
		for i in range(times):
			key,value=input().split()
			values[key]=value
		string=input()
		print("Case #"+str(cnt)+"\n")
		solve(values,string,newstr="")
		times=int(input())
		cnt+=1

main()