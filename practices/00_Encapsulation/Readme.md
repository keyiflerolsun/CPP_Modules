## 📌 Encapsulation Nedir? (Kapsülleme)

Encapsulation, yani kapsülleme, nesne yönelimli programlamanın (OOP) temel prensiplerinden biridir. Temel amacı, **veriyi gizlemek** (data hiding) ve **sadece kontrollü erişime izin vermek**tir.

Bir nesnenin (class’ın) içindeki veriler (örneğin değişkenler) **doğrudan dışarıdan erişilemez**. Bu veriler genellikle `private` olarak tanımlanır. Veri üzerinde işlem yapmak için ise **public** olan “getter” ve “setter” gibi fonksiyonlar kullanılır.

Bu sayede:
- Verilerin yanlış, tutarsız veya geçersiz değerlerle değiştirilmesi önlenir.
- Sınıfın iç yapısı dışarıdan saklanır ve sadece kontrollü bir arayüz ile erişilir.
- Kodun bakımı ve genişletilmesi kolaylaşır.

---

## 🆚 C'den C++'a Geçerken Encapsulation

### C'de Durum
- C, prosedürel programlama dilidir ve veri gizleme için doğal destek sağlamaz.
- Genellikle `struct` kullanılır; ama struct içindeki veriler genellikle herkese açıktır.
- Veri ve fonksiyonlar ayrıdır, bu yüzden veri koruma tamamen programcının disiplinine bağlıdır.
- Örneğin, yaş bilgisini tutan bir `int age` değişkenini doğrudan değiştirmek mümkün ve kontrolsüzdür.

### C++'da Durum
- C++ sınıflar (classes) ile encapsulation sağlar.
- Veri üyeleri `private` olarak tanımlanarak dış erişim engellenir.
- `public` fonksiyonlar aracılığıyla kontrollü erişim sağlanır.
- Böylece hatalı veya geçersiz veri atamaları engellenir (örneğin, negatif yaş atanamaz).
- Sınıfın dışına veri gizlenir, sadece fonksiyonlar aracılığıyla erişilir.

### Örnek Karşılaştırma

| C Dili                     | C++ Dili (Encapsulation)                              |
|----------------------------|-------------------------------------------------------|
| `struct Person { int age; };` <br> `p.age = -5;`   | `class User { private: int age; public: void setAge(int); int getAge() const; };` <br> `user.setAge(-5); // Geçersiz` |
| Veri doğrudan erişilir      | Veri `private` ve korumalıdır                         |
| Veri bütünlüğü korunamaz    | Veri sadece kontrollü fonksiyonlarla değiştirilir    |

---

## 🧩 Neden Önemli?

Encapsulation ile:
- Programın sağlamlığı artar.
- Hatalı kullanımlar engellenir.
- Karmaşıklık azalır.
- Kod daha güvenli ve okunabilir olur.

Bu prensip, C++'ın nesne yönelimli programlama gücünün temel taşlarından biridir.

---

## Özet

Encapsulation, veriyi ve onu işleyen fonksiyonları bir arada tutarak, verinin dışarıdan korunmasını ve kontrollü yönetilmesini sağlar. C dilinde bu yapı yoktur ve veri koruması programcı sorumluluğundadır. C++ ise encapsulation'ı sınıflar ve erişim belirleyicileri ile doğal olarak destekler.

---

