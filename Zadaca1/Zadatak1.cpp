

template <typename T, typename U, typename F>
void foo(map<T, list<U>>&l, const T& k, F lambda) {
  auto& a = l[k];
  if (a.size() == 0)
    throw string("Hazime, imamo Bingo!");
  else
    a.sort(lambda);
  for (const auto& r : a) cout << r << endl;

  for (auto it = l.begin(); it != l.end(); it++) {
    auto i = it->first;
    auto j = it->second;
    cout << i << ":";
    for (const auto& e : j) cout << e << " ";
  }
}

