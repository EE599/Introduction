N = 25000
a = N - [0:N-1];
for i = 1:N
    for j = 1:(N-i)
        if a(j) > a(j+1)
            temp = a(j);
            a(j) = a(j+1);
            a(j+1) = temp;
        end
    end
end
a
            
