**PEAKFINDING IN 2D**

* steps*
-find global maxima in 2d array in mid column let it be m rod index
-if a[m][mid]>a[m][mid-1]and a[m][mid]>a[m][mid+1] then a[m][mid] is max
-if a[m][mid]<a[m][mid-1] then new mid=mid-1 do recursion
-if a[m][mid]<a[m][mid+1] the  new mid=mid+1 do recursion




