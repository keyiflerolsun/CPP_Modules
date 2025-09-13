## 🧠 Sayı Türlerini Gerçekten Biliyor musun?

Tamsayıları ve kayan noktalı sayı türlerini bildiğini düşünüyorsun. Ne kadar da sevimli.

Ama belki de o kadar bilmiyorsun. Emin olmak için lütfen aşağıdaki **3 makaleyi** oku:

1. [Floating Point Numaraları Anlamak](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html)
2. [Floating Point Temsili](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)
3. [Floating Point Sayıları Yazdırmak](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)

Bu makalelerden öğreneceğin bazı önemli noktalar:

- Kayan noktalı sayılar, düşündüğün kadar **doğruluğa sahip değildir**. Sayısal hesaplamalarda yuvarlama hataları, karşılaştırma hataları gibi çeşitli problemler oluşabilir. ([Kaynak 1](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html))
- `float` ve `double` gibi tiplerin **IEEE‑754 standardına** göre temsil edildiğini öğrenirsin. Bu gösterimde sayı, işaret biti + üs (exponent) + kesir (mantissa) şeklinde tutulur. ([Kaynak 2](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html))
- `==` ile karşılaştırma genellikle **güvenilir değildir**; bunun yerine küçük bir tolerans (`epsilon`) kullanılır. ([Kaynak 2](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html))
- Sayıların yazdırılması sırasında da dikkatli olmak gerekir. Farklı formatlama şekilleri (`%f`, `%e` vb.) sonucu etkileyebilir. ([Kaynak 3](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html))

---

## 🆕 Sabit Noktalı Sayılar (Fixed-Point Numbers)

Bugüne kadar kodlarında yalnızca tamsayılar ve kayan noktalı sayı türleriyle çalıştın. Ancak artık yepyeni ve faydalı bir sayı türüyle tanışacaksın: **fixed-point (sabit noktalı) sayılar!**

### Nedir Bu Fixed-Point?

Fixed-point sayılar, **kayan noktalı sayıların** (float/double) sağladığı hassasiyetin bir kısmını feda ederek, daha hızlı ve kontrol edilebilir işlemler sağlar. Bu nedenle özellikle **grafik**, **ses işleme** ve **bilimsel hesaplamalar** gibi alanlarda kullanılırlar.

Sabit noktalı sayıların ne olduğunu anlamak için şu makaleyi oku:
🔗 [Berkeley Üniversitesi - Fixed Point Sayılar](https://web.archive.org/web/20231224143018/https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html)

Bu makaleden öne çıkan bazı bilgiler:

- Fixed-point temsilde, sayı doğrudan bir `int` olarak tutulur, ancak sayı **kesirli kısımlar** içerir. Bu, “binary point” (ikili nokta) adı verilen kavramla yapılır.
- Örneğin: `fixed<8, 3>` tipinde, sayı 8 bit uzunluğundadır ve en sağdaki 3 bit kesir kısmını temsil eder. `00010110` → `00010.110` → `2.75`
- Bu sayede, kayan noktalı işlemler yerine bit kaydırma (shift) ile işlem yapılabilir. ([Berkeley makalesi](https://web.archive.org/web/20231224143018/https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html))
- Negatif sayılar için **two's complement** yöntemi kullanılır, tıpkı tamsayılarda olduğu gibi.

---

### 📐 Not: Orthodox Canonical Form (OCF)

Bu sınıf yapısı, C++’ta **Rule of Three** olarak bilinen prensiplere dayanır:

- Copy constructor
- Copy assignment operator
- Destructor

Bu yapı, nesne ömrü boyunca doğru şekilde kopyalanmasını ve yok edilmesini garanti eder. Geniş bilgi için:
🔗 [Orthodox Canonical Form - cppreference](https://en.cppreference.com/w/cpp/language/rule_of_three)

---

## 🎓 Kaynaklar

- 📘 [Floating Point Explained (Bölüm 1)](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html)
- 📘 [Floating Point Representation (Bölüm 2)](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)
- 📘 [Floating Point Printing (Bölüm 3)](http://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)
- 📘 [Fixed-Point Arithmetic — Berkeley](https://web.archive.org/web/20231224143018/https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html)
- 🏛️ [UC Berkeley — Wikipedia](http://en.wikipedia.org/wiki/University_of_California,_Berkeley#Notable_alumni.2C_faculty.2C_and_staff)
- 📘 [Orthodox Canonical Form - cppreference](https://en.cppreference.com/w/cpp/language/rule_of_three)

