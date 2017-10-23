/*  This file is part of libtweetlength
 *  Copyright (C) 2017 Timm Bäder
 *
 *  libtweetlength is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  libtweetlength is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with libtweetlength.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TL_DATA_H__
#define __TL_DATA_H__

#define PUNCTUATION   "!'#%&\"()*+,\\-./:;<=>?@[]^_{|}~$`"
#define SPACES        " \0x0020\0085\00A0"
#define INVALID_CHARS "\0xFFFE\0xFEFF\0xFFFF"

#define INVALID_URL_CHARS       (PUNCTUATION SPACES INVALID_CHARS)
#define INVALID_AFTER_URL_CHARS "?,!`~&*^%\\|"

#define INVALID_BEFORE_NON_PROTOCOL_URL_CHARS (".@_-)/")
#define INVALID_BEFORE_URL_CHARS              ("$")

#define INVALID_HASHTAG_CHARS "!'#%&\"()*+,\\-./:;<=>?@[]^{|}~$`"

#define INVALID_BEFORE_MENTION_CHARS "!_$&#*"
#define VALID_BEFORE_MENTION_CHARS   ";,`=+"
#define INVALID_MENTION_CHARS        "!'#%&\"()*+,\\-./:;<=>?@[]^{|}~$`"


// List from twitter-text
static const struct {
  size_t length;
  const char *str;
} SPECIAL_CCTLDS[] = {
  {2, "co"},
  {2, "tv"}
};

static const struct {
  size_t length;
  const char *str;
} GTLDS[] = {
  {2, "삼성"},
  {2, "集团"},
  {2, "网络"},
  {2, "网址"},
  {2, "移动"},
  {2, "游戏"},
  {2, "机构"},
  {2, "政务"},
  {2, "世界"},
  {2, "中信"},
  {2, "公司"},
  {2, "公益"},
  {2, "在线"},
  {2, "商标"},
  {2, "商城"},
  {3, "eus"},
  {3, "vet"},
  {3, "foo"},
  {3, "uno"},
  {3, "edu"},
  {3, "wed"},
  {3, "dnp"},
  {3, "gal"},
  {3, "gmo"},
  {3, "wtc"},
  {3, "gop"},
  {3, "wtf"},
  {3, "gov"},
  {3, "xxx"},
  {3, "xyz"},
  {3, "hiv"},
  {3, "ink"},
  {3, "tel"},
  {3, "int"},
  {3, "tax"},
  {3, "орг"},
  {3, "kim"},
  {3, "com"},
  {3, "みんな"},
  {3, "mil"},
  {3, "ceo"},
  {3, "cat"},
  {3, "moe"},
  {3, "中文网"},
  {3, "net"},
  {3, "cab"},
  {3, "bzh"},
  {3, "nhk"},
  {3, "我爱你"},
  {3, "nyc"},
  {3, "bmw"},
  {3, "soy"},
  {3, "onl"},
  {3, "biz"},
  {3, "bio"},
  {3, "org"},
  {3, "bid"},
  {3, "ovh"},
  {3, "bar"},
  {3, "axa"},
  {3, "pro"},
  {3, "pub"},
  {3, "red"},
  {3, "ren"},
  {3, "rio"},
  {4, "moda"},
  {4, "navy"},
  {4, "mobi"},
  {4, "mini"},
  {4, "voto"},
  {4, "menu"},
  {4, "meet"},
  {4, "surf"},
  {4, "luxe"},
  {4, "link"},
  {4, "limo"},
  {4, "life"},
  {4, "lgbt"},
  {4, "land"},
  {4, "kred"},
  {4, "kiwi"},
  {4, "jobs"},
  {4, "info"},
  {4, "tips"},
  {4, "host"},
  {4, "sohu"},
  {4, "pics"},
  {4, "haus"},
  {4, "guru"},
  {4, "town"},
  {4, "pink"},
  {4, "post"},
  {4, "sexy"},
  {4, "ruhr"},
  {4, "toys"},
  {4, "qpon"},
  {4, "scot"},
  {4, "fund"},
  {4, "rest"},
  {4, "rich"},
  {4, "fish"},
  {4, "vote"},
  {4, "farm"},
  {4, "fail"},
  {4, "name"},
  {4, "gift"},
  {4, "дети"},
  {4, "care"},
  {4, "cash"},
  {4, "wang"},
  {4, "camp"},
  {4, "aero"},
  {4, "buzz"},
  {4, "blue"},
  {4, "wien"},
  {4, "wiki"},
  {4, "bike"},
  {4, "club"},
  {4, "best"},
  {4, "desi"},
  {4, "army"},
  {4, "موقع"},
  {4, "شبكة"},
  {4, "arpa"},
  {4, "asia"},
  {4, "组织机构"},
  {4, "beer"},
  {4, "сайт"},
  {4, "zone"},
  {4, "coop"},
  {4, "cool"},
  {5, "cards"},
  {5, "cheap"},
  {5, "miami"},
  {5, "citic"},
  {5, "media"},
  {5, "space"},
  {5, "mango"},
  {5, "ninja"},
  {5, "build"},
  {5, "black"},
  {5, "lotto"},
  {5, "solar"},
  {5, "codes"},
  {5, "paris"},
  {5, "संगठन"},
  {5, "lease"},
  {5, "parts"},
  {5, "koeln"},
  {5, "بازار"},
  {5, "photo"},
  {5, "jetzt"},
  {5, "place"},
  {5, "shoes"},
  {5, "autos"},
  {5, "loans"},
  {5, "press"},
  {5, "audio"},
  {5, "house"},
  {5, "horse"},
  {5, "homes"},
  {5, "tirol"},
  {5, "today"},
  {5, "dance"},
  {5, "tokyo"},
  {5, "tools"},
  {5, "guide"},
  {5, "gripe"},
  {5, "green"},
  {5, "archi"},
  {5, "works"},
  {5, "globo"},
  {5, "rehab"},
  {5, "glass"},
  {5, "gives"},
  {5, "reise"},
  {5, "trade"},
  {5, "email"},
  {5, "vegas"},
  {5, "watch"},
  {5, "actor"},
  {5, "vodka"},
  {5, "rocks"},
  {5, "rodeo"},
  {6, "bayern"},
  {6, "physio"},
  {6, "photos"},
  {6, "social"},
  {6, "quebec"},
  {6, "berlin"},
  {6, "reisen"},
  {6, "agency"},
  {6, "schule"},
  {6, "repair"},
  {6, "report"},
  {6, "ryukyu"},
  {6, "camera"},
  {6, "active"},
  {6, "nagoya"},
  {6, "museum"},
  {6, "expert"},
  {6, "supply"},
  {6, "monash"},
  {6, "career"},
  {6, "center"},
  {6, "church"},
  {6, "market"},
  {6, "claims"},
  {6, "maison"},
  {6, "luxury"},
  {6, "clinic"},
  {6, "london"},
  {6, "events"},
  {6, "suzuki"},
  {6, "coffee"},
  {6, "lawyer"},
  {6, "condos"},
  {6, "kaufen"},
  {6, "juegos"},
  {6, "joburg"},
  {6, "tattoo"},
  {6, "онлайн"},
  {6, "москва"},
  {6, "insure"},
  {6, "tienda"},
  {6, "credit"},
  {6, "yachts"},
  {6, "hiphop"},
  {6, "dating"},
  {6, "gratis"},
  {6, "degree"},
  {6, "dental"},
  {6, "global"},
  {6, "direct"},
  {6, "futbol"},
  {6, "durban"},
  {6, "travel"},
  {6, "webcam"},
  {6, "viajes"},
  {6, "villas"},
  {6, "vision"},
  {6, "voyage"},
  {6, "estate"},
  {6, "voting"},
  {6, "moscow"},
  {7, "spiegel"},
  {7, "support"},
  {7, "surgery"},
  {7, "systems"},
  {7, "singles"},
  {7, "shiksha"},
  {7, "website"},
  {7, "schmidt"},
  {7, "limited"},
  {7, "reviews"},
  {7, "rentals"},
  {7, "recipes"},
  {7, "capital"},
  {7, "careers"},
  {7, "organic"},
  {7, "okinawa"},
  {7, "neustar"},
  {7, "college"},
  {7, "cologne"},
  {7, "company"},
  {7, "academy"},
  {7, "kitchen"},
  {7, "cooking"},
  {7, "country"},
  {7, "cruises"},
  {7, "dentist"},
  {7, "holiday"},
  {7, "hamburg"},
  {7, "guitars"},
  {7, "digital"},
  {7, "gallery"},
  {7, "domains"},
  {7, "frogans"},
  {7, "exposed"},
  {7, "florist"},
  {7, "flights"},
  {7, "fitness"},
  {7, "finance"},
  {7, "fishing"},
  {8, "airforce"},
  {8, "attorney"},
  {8, "bargains"},
  {8, "boutique"},
  {8, "brussels"},
  {8, "builders"},
  {8, "capetown"},
  {8, "catering"},
  {8, "cleaning"},
  {8, "clothing"},
  {8, "computer"},
  {8, "yokohama"},
  {8, "democrat"},
  {8, "diamonds"},
  {8, "discount"},
  {8, "engineer"},
  {8, "exchange"},
  {8, "feedback"},
  {8, "saarland"},
  {8, "ventures"},
  {8, "training"},
  {8, "graphics"},
  {8, "holdings"},
  {8, "lighting"},
  {8, "mortgage"},
  {8, "supplies"},
  {8, "partners"},
  {8, "software"},
  {8, "pictures"},
  {8, "plumbing"},
  {8, "services"},
  {9, "vacations"},
  {9, "equipment"},
  {9, "education"},
  {9, "furniture"},
  {9, "directory"},
  {9, "institute"},
  {9, "community"},
  {9, "marketing"},
  {9, "christmas"},
  {9, "solutions"},
  {9, "financial"},
  {10, "vlaanderen"},
  {10, "foundation"},
  {10, "university"},
  {10, "immobilien"},
  {10, "industries"},
  {10, "cuisinella"},
  {10, "technology"},
  {10, "creditcard"},
  {10, "consulting"},
  {10, "management"},
  {10, "properties"},
  {10, "republican"},
  {10, "associates"},
  {11, "enterprises"},
  {11, "engineering"},
  {11, "investments"},
  {11, "contractors"},
  {11, "motorcycles"},
  {11, "photography"},
  {11, "productions"},
  {11, "blackfriday"},
  {11, "accountants"},
  {12, "versicherung"},
  {12, "construction"},
  {13, "international"},
  {14, "cancerresearch"}
};

static const struct {
  size_t length;
  const char *str;
} CCTLDS[] = {
  {2, "sa"},
  {2, "rw"},
  {2, "ru"},
  {2, "rs"},
  {2, "ro"},
  {2, "re"},
  {2, "qa"},
  {2, "py"},
  {2, "pw"},
  {2, "pt"},
  {2, "ps"},
  {2, "pr"},
  {2, "pn"},
  {2, "pm"},
  {2, "pl"},
  {2, "pk"},
  {2, "ph"},
  {2, "pg"},
  {2, "pf"},
  {2, "pe"},
  {2, "pa"},
  {2, "om"},
  {2, "nz"},
  {2, "nu"},
  {2, "nr"},
  {2, "np"},
  {2, "no"},
  {2, "nl"},
  {2, "ni"},
  {2, "ng"},
  {2, "nf"},
  {2, "li"},
  {2, "ne"},
  {2, "na"},
  {2, "mz"},
  {2, "my"},
  {2, "mx"},
  {2, "mw"},
  {2, "mv"},
  {2, "mu"},
  {2, "mt"},
  {2, "ms"},
  {2, "mr"},
  {2, "mq"},
  {2, "mp"},
  {2, "mo"},
  {2, "mn"},
  {2, "한국"},
  {2, "ml"},
  {2, "mk"},
  {2, "mh"},
  {2, "mg"},
  {2, "mf"},
  {2, "me"},
  {2, "md"},
  {2, "mc"},
  {2, "ma"},
  {2, "ly"},
  {2, "lv"},
  {2, "lu"},
  {2, "lt"},
  {2, "ls"},
  {2, "lr"},
  {2, "lk"},
  {2, "nc"},
  {2, "sb"},
  {2, "香港"},
  {2, "台灣"},
  {2, "台湾"},
  {2, "中國"},
  {2, "中国"},
  {2, "გე"},
  {2, "рф"},
  {2, "zw"},
  {2, "zm"},
  {2, "za"},
  {2, "yt"},
  {2, "ye"},
  {2, "ws"},
  {2, "wf"},
  {2, "vu"},
  {2, "vn"},
  {2, "vi"},
  {2, "vg"},
  {2, "ve"},
  {2, "vc"},
  {2, "va"},
  {2, "uz"},
  {2, "uy"},
  {2, "us"},
  {2, "um"},
  {2, "uk"},
  {2, "ug"},
  {2, "ua"},
  {2, "tz"},
  {2, "tw"},
  {2, "tv"},
  {2, "sc"},
  {2, "tt"},
  {2, "tp"},
  {2, "to"},
  {2, "tn"},
  {2, "tm"},
  {2, "tl"},
  {2, "tk"},
  {2, "tj"},
  {2, "th"},
  {2, "tg"},
  {2, "tf"},
  {2, "td"},
  {2, "tc"},
  {2, "sz"},
  {2, "sy"},
  {2, "sx"},
  {2, "sv"},
  {2, "su"},
  {2, "st"},
  {2, "ss"},
  {2, "sr"},
  {2, "so"},
  {2, "sn"},
  {2, "sm"},
  {2, "sl"},
  {2, "sk"},
  {2, "sj"},
  {2, "si"},
  {2, "sh"},
  {2, "sg"},
  {2, "se"},
  {2, "sd"},
  {2, "tr"},
  {2, "mm"},
  {2, "dz"},
  {2, "do"},
  {2, "dm"},
  {2, "dk"},
  {2, "dj"},
  {2, "de"},
  {2, "cz"},
  {2, "cy"},
  {2, "cx"},
  {2, "cw"},
  {2, "cv"},
  {2, "cu"},
  {2, "cr"},
  {2, "co"},
  {2, "cn"},
  {2, "cm"},
  {2, "lc"},
  {2, "ck"},
  {2, "ci"},
  {2, "ch"},
  {2, "cg"},
  {2, "cf"},
  {2, "cd"},
  {2, "cc"},
  {2, "ca"},
  {2, "bz"},
  {2, "by"},
  {2, "bw"},
  {2, "bv"},
  {2, "bt"},
  {2, "bs"},
  {2, "ec"},
  {2, "br"},
  {2, "bo"},
  {2, "bn"},
  {2, "bm"},
  {2, "bl"},
  {2, "bj"},
  {2, "bi"},
  {2, "bh"},
  {2, "bg"},
  {2, "bf"},
  {2, "be"},
  {2, "bd"},
  {2, "bb"},
  {2, "ba"},
  {2, "az"},
  {2, "ax"},
  {2, "aw"},
  {2, "au"},
  {2, "at"},
  {2, "as"},
  {2, "ar"},
  {2, "aq"},
  {2, "ao"},
  {2, "an"},
  {2, "am"},
  {2, "al"},
  {2, "ai"},
  {2, "ag"},
  {2, "af"},
  {2, "ae"},
  {2, "ad"},
  {2, "ac"},
  {2, "bq"},
  {2, "cl"},
  {2, "lb"},
  {2, "la"},
  {2, "kz"},
  {2, "ky"},
  {2, "kw"},
  {2, "kr"},
  {2, "kp"},
  {2, "kn"},
  {2, "km"},
  {2, "ki"},
  {2, "kh"},
  {2, "kg"},
  {2, "ke"},
  {2, "jp"},
  {2, "ee"},
  {2, "jm"},
  {2, "je"},
  {2, "it"},
  {2, "is"},
  {2, "ir"},
  {2, "iq"},
  {2, "io"},
  {2, "in"},
  {2, "im"},
  {2, "il"},
  {2, "ie"},
  {2, "id"},
  {2, "hu"},
  {2, "ht"},
  {2, "hr"},
  {2, "hn"},
  {2, "hm"},
  {2, "jo"},
  {2, "eg"},
  {2, "eh"},
  {2, "er"},
  {2, "es"},
  {2, "et"},
  {2, "eu"},
  {2, "fi"},
  {2, "fj"},
  {2, "fk"},
  {2, "fm"},
  {2, "fo"},
  {2, "fr"},
  {2, "ga"},
  {2, "gb"},
  {2, "gd"},
  {2, "hk"},
  {2, "gf"},
  {2, "gg"},
  {2, "gh"},
  {2, "gi"},
  {2, "gl"},
  {2, "gm"},
  {2, "gn"},
  {2, "gp"},
  {2, "gq"},
  {2, "gr"},
  {2, "gs"},
  {2, "gt"},
  {2, "gu"},
  {2, "gw"},
  {2, "gy"},
  {2, "ge"},
  {3, "мкд"},
  {3, "мон"},
  {3, "срб"},
  {3, "укр"},
  {3, "қаз"},
  {3, "قطر"},
  {3, "مصر"},
  {3, "ไทย"},
  {3, "新加坡"},
  {4, "تونس"},
  {4, "عمان"},
  {4, "भारत"},
  {4, "ভারত"},
  {4, "ਭਾਰਤ"},
  {4, "ભારત"},
  {4, "ලංකා"},
  {5, "ایران"},
  {5, "بھارت"},
  {5, "سودان"},
  {5, "سورية"},
  {5, "বাংলা"},
  {5, "భారత్"},
  {6, "الاردن"},
  {6, "المغرب"},
  {6, "امارات"},
  {6, "فلسطين"},
  {6, "مليسيا"},
  {6, "இலங்கை"},
  {7, "الجزائر"},
  {7, "پاکستان"},
  {7, "இந்தியா"},
  {8, "السعودية"},
  {11, "சிங்கப்பூர்"},
};

#endif