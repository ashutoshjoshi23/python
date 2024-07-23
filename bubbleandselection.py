def bubble(a,n):
	for i in range (n):
		for j in range (0,n-i-1):
			if(a[j]>a[j+1]):
				temp=a[j]
				a[j]=a[j+1]
				a[j+1]=temp
				
	
	for i in range(n):
			print(a[i])			
				
	
def selection(a,n):
	for i in range (n):
		min=i
		for j in range (i+1,n):
			if(a[j]<a[min]):
				min=j
		temp=a[i]
		a[i]=a[min]
		a[min]=temp
		
	
	for i in range(n):
			print(a[i])	
			
def insertion(a,n):
	for i in range (n):
		temp=a[i]
		j=i-1
		while(j>=0 and a[j]>temp):
	
			a[j+1]=a[j]
			j=j-1
	
		a[j+1]=temp

	
	for i in range(n):
		print(a[i])					
	
	
a=[]
n=int(input("Enter the no of elements:"))

for i in range (n):
	m=float(input("Enter the number: "))
	a.append(m)

		
while True:
	print("Press 1 for Bubble Sort")		
	print("Press 2 for Selection Sort")
	print("Press 3 for Insertion Sort")
	print("Press 4 to exit")
	
	choice=int(input("Enter your choice:"))
	if choice==1:
		print("Sorted array using Bubble Sort is:")
		bubble(a,n)	
	if choice==2:
		print("Sorted array using Selection Sort is:")
		selection(a,n)	
	if choice==3:
		print("Sorted array using Insertion Sort is:")
		insertion(a,n)		
	if choice==4:
		print("You have exited the program")
		break;
