//渐进复杂度big-O 
//j<n
for (i=1;i<n ;i++ ){
	for (j=1;j<n ;j++ ){
		O(n²)
	}
}

//j<i
for (i=1;i<n ;i++ ){
	for (j=1;j<i ;j++ ){
		O(n²)
	}
}

//j<i     j+=1111
for (i=1;i<n ;i++ ){
	for (j=1;j<i ;j+=1111 ){
		O(n²)
	}
}

//j<i     i*2
for (i=1;i<n ;i<<=1 ){   
	for (j=1;j<i ;j++ ){
		O(n)
	}
}

//j<i     j+=j
for (i=1;i<n ;i++ ){
	for (j=1;j<i ;j+=j ){
		O(nlogn)
	}
}
