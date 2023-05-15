# AA.KisaSinav2-1
Algoritma analiz kisa sinavı


Kodun ne işe yaradığını ve nasıl çalıştığını açıklayın. 
- Kodun zaman karmaşıklığını adım adım göstererek hesaplayın. (Sadece O(n) vb. şekilde notasyonu yazanlara puan verilmeyecektir). 
- Verilen kodun nasıl geliştirilebileceği öneriler vererek anlatın. 
- Verdiğiniz önerileri kodlayın ve yeni geliştirdiğiniz kodun zaman karmaşıklığını hesaplayın. 
- Her iki kodun zaman karmaşıklıklarını ve çalışma sürelerini karşılaştırın.




1.soru:
Bu program, bir dizi üzerinde sıralama, alt dizi toplamlarını hesaplama ve bir grafikte en kısa yol mesafelerini hesaplama gibi işlemleri gerçekleştirir.
-dizi oluşturma : generate fonksiyonu kullanılarak (a) dizisi rastgele sayılarla doldurulur.
-Dizi Sıralama: function1 fonksiyonu, kabarcık sıralama algoritmasını kullanarak (a) dizisini artan sırada sıralama yapılıyor.
- Maksimum Alt Dizi Toplamının Ortalamasını Hesaplama: function2 fonksiyonu, (a) dizisi üzerinde dolaşarak maksimum alt dizi toplamını ve bu toplamın adedini hesaplar. Son olarak, maksimum toplamın adedine bölerek ortalamayı bulur.
-En Kısa Yol Mesafelerini Hesaplama: function3 fonksiyonu, Floyd-Warshall algoritmasını kullanarak (g) matrisindeki düğümler arasındaki en kısa yol mesafelerini hesaplar ve (d) matrisine kaydeder.
-Sonuçları Yazdırma:
•	print1 fonksiyonu, (a) dizisini biçimlendirerek ekrana yazdırır.
•	print2 fonksiyonu, (g) ve (d) matrislerini biçimlendirerek ekrana yazdırır.
•	print3 fonksiyonu, (d) matrisindeki düğümler arasındaki en kısa yol mesafelerini (t) değerine göre filtreleyerek ekrana yazdırır.
Programın çalışma süresi, clock fonksiyonu kullanılarak başlangıç ve bitiş zamanları arasındaki fark olarak hesaplanır ve ekrana yazdırılır.
Bu şekilde, program rastgele sayılar üretir, diziyi sıralar, alt dizi toplamlarını hesaplar, grafikteki en kısa yol mesafelerini hesaplar ve sonuçları ekrana yazdırır.



2.soru:
1.	generate fonksiyonu: O(n)
•	Döngü, dizi boyutu (n) kadar çalışır.
•	Her bir adımda bir eleman atanır.
•	Dolayısıyla, O(n) zaman karmaşıklığına sahiptir.
2.	function1 fonksiyonu: O(n^2)
•	İç içe iki döngü, dizi boyutu (n) kadar çalışır.
•	İç döngü, her iterasyonda bir elemanı doğru konuma yerleştirmek için çalışır.
•	Dolayısıyla, O(n^2) zaman karmaşıklığına sahiptir.
3.	function2 fonksiyonu: O(n)
•	Tek bir döngü, dizi boyutu (n) kadar çalışır.
•	Her iterasyonda bir işlem yapılır.
•	Dolayısıyla, O(n) zaman karmaşıklığına sahiptir.
4.	function3 fonksiyonu: O(n^3)
•	İç içe üç döngü, matris boyutu (n) kadar çalışır.
•	Her bir döngü, matris boyutuna bağlı olarak çalışır.
•	Dolayısıyla, O(n^3) zaman karmaşıklığına sahiptir.
5.	print1 fonksiyonu: O(n)
•	Tek bir döngü, dizi boyutu (n) kadar çalışır.
•	Her iterasyonda bir eleman yazdırılır.
•	Dolayısıyla, O(n) zaman karmaşıklığına sahiptir.
6.	print2 fonksiyonu: O(n^2)
•	İç içe iki döngü, matris boyutu (n) kadar çalışır.
•	Her bir döngü, matris boyutuna bağlı olarak çalışır.
•	Dolayısıyla, O(n^2) zaman karmaşıklığına sahiptir.
7.	print3 fonksiyonu: O(n^2)
•	İç içe iki döngü, matris boyutu (n) kadar çalışır.
•	Her bir döngü, matris boyutuna bağlı olarak çalışır.
•	Dolayısıyla, O(n^2) zaman karmaşıklığına sahiptir.
Toplam Zaman Karmaşıklığı:
•	generate fonksiyonu: O(n)
•	function1 fonksiyonu: O(n^2)
•	function2 fonksiyonu: O(n)
•	function3 fonksiyonu: O(n^3)
•	print1 fonksiyonu: O(n)
•	print2 fonksiyonu: O(n^2)
•	print3 fonksiyonu: O(n^2)
Bunları topladığımızda, en yüksek olan karmaşıklık O(n^3) olarak ifade edilir. 


3.soru: 
1.	Algoritmik Optimizasyon:
•	function1 fonksiyonunda kullanılan sıralama algoritması kabarcık sıralamasıdır, ancak daha verimli sıralama algoritmaları mevcuttur. Örneğin, hızlı sıralama (quick sort) veya birleştirme sıralaması (merge sort) gibi algoritmaları düşünebilirsiniz.
2.	Performans İyileştirmeleri:
•	function2 fonksiyonunda, alt dizi toplamını hesaplamak için kullanılan döngüyü optimize edebilirsiniz. Örneğin, Kadane algoritmasını kullanarak daha verimli bir şekilde alt dizi toplamını bulabilirsiniz.
3.	Bellek Yönetimi:
•	Matris boyutlarını ve dizilerin boyutlarını dinamik olarak ayarlamak yerine, başlangıçta sabit boyutlarla tanımlanmışlar. Eğer dinamik boyut ayarlama mümkünse, daha esnek bir yapı elde edebilirsiniz.
4.	Hata Kontrolü:
•	Kodun güvenliğini ve hataya dayanıklılığını artırmak için girişlerin doğruluğunu kontrol edebilir ve gerekirse hatalara yönelik uygun işlemler yapabilirsiniz.

4.soru:

AbdallaYoussef5190505084/AA.KisaSinav2-1: Algoritma analiz kisa sinavı (github.com)


•	generate fonksiyonu çağrılır: O(A_SIZE)
•	function1 fonksiyonu çağrılır: O(A_SIZE log A_SIZE)
•	function2 fonksiyonu çağrılır: O(A_SIZE)
•	initializeGraph fonksiyonu çağrılır: O(G_SIZE^2)
•	function3 fonksiyonu çağrılır: O(G_SIZE^3)
•	printArray fonksiyonu çağrılır: O(A_SIZE)
•	printMatrix fonksiyonu çağrılır: O(G_SIZE^2)
•	print3 fonksiyonu çağrılır: O(G_SIZE^2)

Bu işlemleri topladığımızda, ana fonksiyonun zaman karmaşıklığı aşağıdaki gibi olur: O(A_SIZE) + O(A_SIZE log A_SIZE) + O(A_SIZE) + O(G_SIZE^2) + O(G_SIZE^3) + O(A_SIZE) + O(G_SIZE^2) + O(G_SIZE^2)
Bu ifadeleri sadeleştirerek genel bir karmaşıklık ifadesi elde edebiliriz: O(G_SIZE^3) + O(A_SIZE log A_SIZE) + O(G_SIZE^2)
Ancak A_SIZE ve G_SIZE sabit değerler olduğundan, genel karmaşıklık ifadesi aşağıdaki gibi basitleşir: O(1)
Yani, bu programın genel zaman karmaşıklığı sabit zamandır.


5.soru:

İlk kodun zaman karmaşıklığı O(n^3) olarak ifade edilirken, ikinci kodun zaman karmaşıklığı sabit zamandır (O(1)). Bu nedenle, ikinci kod daha verimlidir ve büyük girdilerle çalıştırıldığında daha hızlı sonuç üretecektir. İlk kodun zaman karmaşıklığı n^3 olduğundan, n değeri arttıkça çalışma süresi önemli ölçüde artacaktır. Ancak ikinci kod, girdi boyutuyla bağlantılı olarak sabit bir çalışma süresine sahip olduğundan, girdinin boyutu ne olursa olsun hızlı bir şekilde çalışacaktır. Bu nedenle, büyük veri kümeleriyle çalışırken ikinci kod tercih edilmelidir.

