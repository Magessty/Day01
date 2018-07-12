annuaire="https://projects.intra.42.fr/uploads/document/document/266/contacts_hard.txt"
echo $annuaire | grep -i "bauer" | grep -i "nicolas" | sed '1,5d' | cut -c 26-38 | tr -d '\n'
