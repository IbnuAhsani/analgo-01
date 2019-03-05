# Analisis Algortima
# Pertanyaan
1. Apakah jawaban anda di Worksheet 1 sama persis dengan di program ?
  - Sama

2. Algoritma G-S berakhir setelah paling banyak n^2 iterasi menggunakan While Loop. Buktikan 
  - Pada setiap iterasi, seorang _man_ akan melamar seorang _woman_ yang belum pernah dilamar oleh _man_ tersebut pada iterasi sebelumnya. Karena jumlah _man_ dan _woman_ sama-sama _n_, maka jumlah iterasi paling banyak yang dapat dilakukan sebelum algoritma G-S berhenti adalah n^2.

3. Jika seorang pria bebas di beberapa titik dalam eksekusi algoritma, maka ada seorang wanita yang belum diajak bertunangan. Buktikan!
  - Jumlah _man_ yang melamar akan sama dengan jumlah _woman_ yang telah dilamar. Jika _man_ tersebut telah melamar semua _woman_, maka berdasarkan aturan yang menyatakan bahwa; "ketika _woman_ itu free dan sedang dilamar _man_, maka ia harus menerima lamaran tersebut", tidak mungkin terdapat seorang _woman_ yang _free_ setelah seorang _man_ telah melamar semua _woman_.

4. Himpunan S yang dikembalikan saat terminasi adalah _perfect matching_. Buktikan!
  - Seandainya terdapat seorang _man_ yang _free_ saat algoritma berakhir. Itu berarti, terdapat pula seorang _women_ yang belum memiliki pasangan. Karena _perfect matching_ adalah ketika kedua _man_ dan _woman_ hanya dipasangkan satu dengan yang lainnya, secara otomatis, himpunan yang dikembalikan adalah sebuah _perfect matching_. 

5. Sebuah eksekusi algoritma G-S mengembalikan satu set pasangan S. Set S adalah pasangan yang stabil. Buktikan!
  - Misalkan pasangan yang bukan anggota himpunan Gale-Shapley _S_ 
  - Kasus 1: _m_ tidak pernah melamar _w_
    - kemungkinan:
      - _m_ lebih memilih _w'_ dibanding _w_
      - dengan ini, _S_ stabil

  - Kasus 2: _m_ pernah melamar _w_
    - kemungkinan:
      - _w_ menolak lamaran _m_ sekarang/nanti
      - _w_ lebih memilih _m'_ dibanding _m_
      - dengan ini, _S_ stabil
