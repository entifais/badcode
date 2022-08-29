class node:
		def __init__(self,frist,second):
			self.frist=frist
			self.second=second
class tree:
	def __init__(self,val):
		self.key=val
		self.child=[]

def solve(values,oldstr,newstr=""):
	for i in range(values):
		ans=oldstr.find(i)
		if ans!=-1:#found it
			oldstr=oldstr.replace(i,"")
			newstr+=values[i]
			return solve(values,oldstr,newstr)
		else:#parada?

times=int(input())
while times:# by default if is 0 stop
	values={}
	for i in range(t):
		key,value=input.split()
		values[key]=values
	string=input()
	solve(values,string,newstr="")
	#if string=="":#the argortitm know if is empty return empty
	#	print("")
	times=int(input())