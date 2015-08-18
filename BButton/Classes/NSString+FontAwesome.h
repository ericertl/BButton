//
//  * The Font Awesome font is licensed under the SIL Open Font License
//  http://scripts.sil.org/OFL
//
//
//  * Font Awesome CSS, LESS, and SASS files are licensed under the MIT License
//  http://opensource.org/licenses/mit-license.html
//
//
//  * The Font Awesome pictograms are licensed under the CC BY 3.0 License
//  http://creativecommons.org/licenses/by/3.0
//
//
//  * Attribution is no longer required in Font Awesome 3.0, but much appreciated:
//  "Font Awesome by Dave Gandy - http://fortawesome.github.com/Font-Awesome"
//
//
//  -----------------------------------------
//  Edited and refactored by Jesse Squires on 2 April, 2013.
//
//  http://github.com/jessesquires/BButton
//
//  http://jessesquires.com
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  A string constant for the Font Awesome font family name.
 */
FOUNDATION_EXPORT NSString * const kFontAwesomeFont;

/**
 *  A constant describing the available Font Awesome Icons.
 */
typedef NS_ENUM(unsigned short, FAIcon) {
    FAGlass = 0xf000,
    FAMusic = 0xf001,
    FASearch = 0xf002,
    FAEnvelopeO = 0xf003,
    FAHeart = 0xf004,
    FAStar = 0xf005,
    FAStarO = 0xf006,
    FAUser = 0xf007,
    FAFilm = 0xf008,
    FAThLarge = 0xf009,
    FATh = 0xf00a,
    FAThList = 0xf00b,
    FACheck = 0xf00c,
    FARemove = 0xf00d,
    FAClose = 0xf00d,
    FATimes = 0xf00d,
    FASearchPlus = 0xf00e,
    FASearchMinus = 0xf010,
    FAPowerOff = 0xf011,
    FASignal = 0xf012,
    FAGear = 0xf013,
    FACog = 0xf013,
    FATrashO = 0xf014,
    FAHome = 0xf015,
    FAFileO = 0xf016,
    FAClockO = 0xf017,
    FARoad = 0xf018,
    FADownload = 0xf019,
    FAArrowCircleODown = 0xf01a,
    FAArrowCircleOUp = 0xf01b,
    FAInbox = 0xf01c,
    FAPlayCircleO = 0xf01d,
    FARotateRight = 0xf01e,
    FARepeat = 0xf01e,
    FARefresh = 0xf021,
    FAListAlt = 0xf022,
    FALock = 0xf023,
    FAFlag = 0xf024,
    FAHeadphones = 0xf025,
    FAVolumeOff = 0xf026,
    FAVolumeDown = 0xf027,
    FAVolumeUp = 0xf028,
    FAQrcode = 0xf029,
    FABarcode = 0xf02a,
    FATag = 0xf02b,
    FATags = 0xf02c,
    FABook = 0xf02d,
    FABookmark = 0xf02e,
    FAPrint = 0xf02f,
    FACamera = 0xf030,
    FAFont = 0xf031,
    FABold = 0xf032,
    FAItalic = 0xf033,
    FATextHeight = 0xf034,
    FATextWidth = 0xf035,
    FAAlignLeft = 0xf036,
    FAAlignCenter = 0xf037,
    FAAlignRight = 0xf038,
    FAAlignJustify = 0xf039,
    FAList = 0xf03a,
    FADedent = 0xf03b,
    FAOutdent = 0xf03b,
    FAIndent = 0xf03c,
    FAVideoCamera = 0xf03d,
    FAPhoto = 0xf03e,
    FAImage = 0xf03e,
    FAPictureO = 0xf03e,
    FAPencil = 0xf040,
    FAMapMarker = 0xf041,
    FAAdjust = 0xf042,
    FATint = 0xf043,
    FAEdit = 0xf044,
    FAPencilSquareO = 0xf044,
    FAShareSquareO = 0xf045,
    FACheckSquareO = 0xf046,
    FAArrows = 0xf047,
    FAStepBackward = 0xf048,
    FAFastBackward = 0xf049,
    FABackward = 0xf04a,
    FAPlay = 0xf04b,
    FAPause = 0xf04c,
    FAStop = 0xf04d,
    FAForward = 0xf04e,
    FAFastForward = 0xf050,
    FAStepForward = 0xf051,
    FAEject = 0xf052,
    FAChevronLeft = 0xf053,
    FAChevronRight = 0xf054,
    FAPlusCircle = 0xf055,
    FAMinusCircle = 0xf056,
    FATimesCircle = 0xf057,
    FACheckCircle = 0xf058,
    FAQuestionCircle = 0xf059,
    FAInfoCircle = 0xf05a,
    FACrosshairs = 0xf05b,
    FATimesCircleO = 0xf05c,
    FACheckCircleO = 0xf05d,
    FABan = 0xf05e,
    FAArrowLeft = 0xf060,
    FAArrowRight = 0xf061,
    FAArrowUp = 0xf062,
    FAArrowDown = 0xf063,
    FAMailForward = 0xf064,
    FAShare = 0xf064,
    FAExpand = 0xf065,
    FACompress = 0xf066,
    FAPlus = 0xf067,
    FAMinus = 0xf068,
    FAAsterisk = 0xf069,
    FAExclamationCircle = 0xf06a,
    FAGift = 0xf06b,
    FALeaf = 0xf06c,
    FAFire = 0xf06d,
    FAEye = 0xf06e,
    FAEyeSlash = 0xf070,
    FAWarning = 0xf071,
    FAExclamationTriangle = 0xf071,
    FAPlane = 0xf072,
    FACalendar = 0xf073,
    FARandom = 0xf074,
    FAComment = 0xf075,
    FAMagnet = 0xf076,
    FAChevronUp = 0xf077,
    FAChevronDown = 0xf078,
    FARetweet = 0xf079,
    FAShoppingCart = 0xf07a,
    FAFolder = 0xf07b,
    FAFolderOpen = 0xf07c,
    FAArrowsV = 0xf07d,
    FAArrowsH = 0xf07e,
    FABarChartO = 0xf080,
    FABarChart = 0xf080,
    FATwitterSquare = 0xf081,
    FAFacebookSquare = 0xf082,
    FACameraRetro = 0xf083,
    FAKey = 0xf084,
    FAGears = 0xf085,
    FACogs = 0xf085,
    FAComments = 0xf086,
    FAThumbsOUp = 0xf087,
    FAThumbsODown = 0xf088,
    FAStarHalf = 0xf089,
    FAHeartO = 0xf08a,
    FASignOut = 0xf08b,
    FALinkedinSquare = 0xf08c,
    FAThumbTack = 0xf08d,
    FAExternalLink = 0xf08e,
    FASignIn = 0xf090,
    FATrophy = 0xf091,
    FAGithubSquare = 0xf092,
    FAUpload = 0xf093,
    FALemonO = 0xf094,
    FAPhone = 0xf095,
    FASquareO = 0xf096,
    FABookmarkO = 0xf097,
    FAPhoneSquare = 0xf098,
    FATwitter = 0xf099,
    FAFacebookF = 0xf09a,
    FAFacebook = 0xf09a,
    FAGithub = 0xf09b,
    FAUnlock = 0xf09c,
    FACreditCard = 0xf09d,
    FAFeed = 0xf09e,
    FARss = 0xf09e,
    FAHddO = 0xf0a0,
    FABullhorn = 0xf0a1,
    FABell = 0xf0f3,
    FACertificate = 0xf0a3,
    FAHandORight = 0xf0a4,
    FAHandOLeft = 0xf0a5,
    FAHandOUp = 0xf0a6,
    FAHandODown = 0xf0a7,
    FAArrowCircleLeft = 0xf0a8,
    FAArrowCircleRight = 0xf0a9,
    FAArrowCircleUp = 0xf0aa,
    FAArrowCircleDown = 0xf0ab,
    FAGlobe = 0xf0ac,
    FAWrench = 0xf0ad,
    FATasks = 0xf0ae,
    FAFilter = 0xf0b0,
    FABriefcase = 0xf0b1,
    FAArrowsAlt = 0xf0b2,
    FAGroup = 0xf0c0,
    FAUsers = 0xf0c0,
    FAChain = 0xf0c1,
    FALink = 0xf0c1,
    FACloud = 0xf0c2,
    FAFlask = 0xf0c3,
    FACut = 0xf0c4,
    FAScissors = 0xf0c4,
    FACopy = 0xf0c5,
    FAFilesO = 0xf0c5,
    FAPaperclip = 0xf0c6,
    FASave = 0xf0c7,
    FAFloppyO = 0xf0c7,
    FASquare = 0xf0c8,
    FANavicon = 0xf0c9,
    FAReorder = 0xf0c9,
    FABars = 0xf0c9,
    FAListUl = 0xf0ca,
    FAListOl = 0xf0cb,
    FAStrikethrough = 0xf0cc,
    FAUnderline = 0xf0cd,
    FATable = 0xf0ce,
    FAMagic = 0xf0d0,
    FATruck = 0xf0d1,
    FAPinterest = 0xf0d2,
    FAPinterestSquare = 0xf0d3,
    FAGooglePlusSquare = 0xf0d4,
    FAGooglePlus = 0xf0d5,
    FAMoney = 0xf0d6,
    FACaretDown = 0xf0d7,
    FACaretUp = 0xf0d8,
    FACaretLeft = 0xf0d9,
    FACaretRight = 0xf0da,
    FAColumns = 0xf0db,
    FAUnsorted = 0xf0dc,
    FASort = 0xf0dc,
    FASortDown = 0xf0dd,
    FASortDesc = 0xf0dd,
    FASortUp = 0xf0de,
    FASortAsc = 0xf0de,
    FAEnvelope = 0xf0e0,
    FALinkedin = 0xf0e1,
    FARotateLeft = 0xf0e2,
    FAUndo = 0xf0e2,
    FALegal = 0xf0e3,
    FAGavel = 0xf0e3,
    FADashboard = 0xf0e4,
    FATachometer = 0xf0e4,
    FACommentO = 0xf0e5,
    FACommentsO = 0xf0e6,
    FAFlash = 0xf0e7,
    FABolt = 0xf0e7,
    FASitemap = 0xf0e8,
    FAUmbrella = 0xf0e9,
    FAPaste = 0xf0ea,
    FAClipboard = 0xf0ea,
    FALightbulbO = 0xf0eb,
    FAExchange = 0xf0ec,
    FACloudDownload = 0xf0ed,
    FACloudUpload = 0xf0ee,
    FAUserMd = 0xf0f0,
    FAStethoscope = 0xf0f1,
    FASuitcase = 0xf0f2,
    FABellO = 0xf0a2,
    FACoffee = 0xf0f4,
    FACutlery = 0xf0f5,
    FAFileTextO = 0xf0f6,
    FABuildingO = 0xf0f7,
    FAHospitalO = 0xf0f8,
    FAAmbulance = 0xf0f9,
    FAMedkit = 0xf0fa,
    FAFighterJet = 0xf0fb,
    FABeer = 0xf0fc,
    FAHSquare = 0xf0fd,
    FAPlusSquare = 0xf0fe,
    FAAngleDoubleLeft = 0xf100,
    FAAngleDoubleRight = 0xf101,
    FAAngleDoubleUp = 0xf102,
    FAAngleDoubleDown = 0xf103,
    FAAngleLeft = 0xf104,
    FAAngleRight = 0xf105,
    FAAngleUp = 0xf106,
    FAAngleDown = 0xf107,
    FADesktop = 0xf108,
    FALaptop = 0xf109,
    FATablet = 0xf10a,
    FAMobilePhone = 0xf10b,
    FAMobile = 0xf10b,
    FACircleO = 0xf10c,
    FAQuoteLeft = 0xf10d,
    FAQuoteRight = 0xf10e,
    FASpinner = 0xf110,
    FACircle = 0xf111,
    FAMailReply = 0xf112,
    FAReply = 0xf112,
    FAGithubAlt = 0xf113,
    FAFolderO = 0xf114,
    FAFolderOpenO = 0xf115,
    FASmileO = 0xf118,
    FAFrownO = 0xf119,
    FAMehO = 0xf11a,
    FAGamepad = 0xf11b,
    FAKeyboardO = 0xf11c,
    FAFlagO = 0xf11d,
    FAFlagCheckered = 0xf11e,
    FATerminal = 0xf120,
    FACode = 0xf121,
    FAMailReplyAll = 0xf122,
    FAReplyAll = 0xf122,
    FAStarHalfEmpty = 0xf123,
    FAStarHalfFull = 0xf123,
    FAStarHalfO = 0xf123,
    FALocationArrow = 0xf124,
    FACrop = 0xf125,
    FACodeFork = 0xf126,
    FAUnlink = 0xf127,
    FAChainBroken = 0xf127,
    FAQuestion = 0xf128,
    FAInfo = 0xf129,
    FAExclamation = 0xf12a,
    FASuperscript = 0xf12b,
    FASubscript = 0xf12c,
    FAEraser = 0xf12d,
    FAPuzzlePiece = 0xf12e,
    FAMicrophone = 0xf130,
    FAMicrophoneSlash = 0xf131,
    FAShield = 0xf132,
    FACalendarO = 0xf133,
    FAFireExtinguisher = 0xf134,
    FARocket = 0xf135,
    FAMaxcdn = 0xf136,
    FAChevronCircleLeft = 0xf137,
    FAChevronCircleRight = 0xf138,
    FAChevronCircleUp = 0xf139,
    FAChevronCircleDown = 0xf13a,
    FAHtml5 = 0xf13b,
    FACss3 = 0xf13c,
    FAAnchor = 0xf13d,
    FAUnlockAlt = 0xf13e,
    FABullseye = 0xf140,
    FAEllipsisH = 0xf141,
    FAEllipsisV = 0xf142,
    FARssSquare = 0xf143,
    FAPlayCircle = 0xf144,
    FATicket = 0xf145,
    FAMinusSquare = 0xf146,
    FAMinusSquareO = 0xf147,
    FALevelUp = 0xf148,
    FALevelDown = 0xf149,
    FACheckSquare = 0xf14a,
    FAPencilSquare = 0xf14b,
    FAExternalLinkSquare = 0xf14c,
    FAShareSquare = 0xf14d,
    FACompass = 0xf14e,
    FAToggleDown = 0xf150,
    FACaretSquareODown = 0xf150,
    FAToggleUp = 0xf151,
    FACaretSquareOUp = 0xf151,
    FAToggleRight = 0xf152,
    FACaretSquareORight = 0xf152,
    FAEuro = 0xf153,
    FAEur = 0xf153,
    FAGbp = 0xf154,
    FADollar = 0xf155,
    FAUsd = 0xf155,
    FARupee = 0xf156,
    FAInr = 0xf156,
    FACny = 0xf157,
    FARmb = 0xf157,
    FAYen = 0xf157,
    FAJpy = 0xf157,
    FARuble = 0xf158,
    FARouble = 0xf158,
    FARub = 0xf158,
    FAWon = 0xf159,
    FAKrw = 0xf159,
    FABitcoin = 0xf15a,
    FABtc = 0xf15a,
    FAFile = 0xf15b,
    FAFileText = 0xf15c,
    FASortAlphaAsc = 0xf15d,
    FASortAlphaDesc = 0xf15e,
    FASortAmountAsc = 0xf160,
    FASortAmountDesc = 0xf161,
    FASortNumericAsc = 0xf162,
    FASortNumericDesc = 0xf163,
    FAThumbsUp = 0xf164,
    FAThumbsDown = 0xf165,
    FAYoutubeSquare = 0xf166,
    FAYoutube = 0xf167,
    FAXing = 0xf168,
    FAXingSquare = 0xf169,
    FAYoutubePlay = 0xf16a,
    FADropbox = 0xf16b,
    FAStackOverflow = 0xf16c,
    FAInstagram = 0xf16d,
    FAFlickr = 0xf16e,
    FAAdn = 0xf170,
    FABitbucket = 0xf171,
    FABitbucketSquare = 0xf172,
    FATumblr = 0xf173,
    FATumblrSquare = 0xf174,
    FALongArrowDown = 0xf175,
    FALongArrowUp = 0xf176,
    FALongArrowLeft = 0xf177,
    FALongArrowRight = 0xf178,
    FAApple = 0xf179,
    FAWindows = 0xf17a,
    FAAndroid = 0xf17b,
    FALinux = 0xf17c,
    FADribbble = 0xf17d,
    FASkype = 0xf17e,
    FAFoursquare = 0xf180,
    FATrello = 0xf181,
    FAFemale = 0xf182,
    FAMale = 0xf183,
    FAGittip = 0xf184,
    FAGratipay = 0xf184,
    FASunO = 0xf185,
    FAMoonO = 0xf186,
    FAArchive = 0xf187,
    FABug = 0xf188,
    FAVk = 0xf189,
    FAWeibo = 0xf18a,
    FARenren = 0xf18b,
    FAPagelines = 0xf18c,
    FAStackExchange = 0xf18d,
    FAArrowCircleORight = 0xf18e,
    FAArrowCircleOLeft = 0xf190,
    FAToggleLeft = 0xf191,
    FACaretSquareOLeft = 0xf191,
    FADotCircleO = 0xf192,
    FAWheelchair = 0xf193,
    FAVimeoSquare = 0xf194,
    FATurkishLira = 0xf195,
    FATry = 0xf195,
    FAPlusSquareO = 0xf196,
    FASpaceShuttle = 0xf197,
    FASlack = 0xf198,
    FAEnvelopeSquare = 0xf199,
    FAWordpress = 0xf19a,
    FAOpenid = 0xf19b,
    FAInstitution = 0xf19c,
    FABank = 0xf19c,
    FAUniversity = 0xf19c,
    FAMortarBoard = 0xf19d,
    FAGraduationCap = 0xf19d,
    FAYahoo = 0xf19e,
    FAGoogle = 0xf1a0,
    FAReddit = 0xf1a1,
    FARedditSquare = 0xf1a2,
    FAStumbleuponCircle = 0xf1a3,
    FAStumbleupon = 0xf1a4,
    FADelicious = 0xf1a5,
    FADigg = 0xf1a6,
    FAPiedPiper = 0xf1a7,
    FAPiedPiperAlt = 0xf1a8,
    FADrupal = 0xf1a9,
    FAJoomla = 0xf1aa,
    FALanguage = 0xf1ab,
    FAFax = 0xf1ac,
    FABuilding = 0xf1ad,
    FAChild = 0xf1ae,
    FAPaw = 0xf1b0,
    FASpoon = 0xf1b1,
    FACube = 0xf1b2,
    FACubes = 0xf1b3,
    FABehance = 0xf1b4,
    FABehanceSquare = 0xf1b5,
    FASteam = 0xf1b6,
    FASteamSquare = 0xf1b7,
    FARecycle = 0xf1b8,
    FAAutomobile = 0xf1b9,
    FACar = 0xf1b9,
    FACab = 0xf1ba,
    FATaxi = 0xf1ba,
    FATree = 0xf1bb,
    FASpotify = 0xf1bc,
    FADeviantart = 0xf1bd,
    FASoundcloud = 0xf1be,
    FADatabase = 0xf1c0,
    FAFilePdfO = 0xf1c1,
    FAFileWordO = 0xf1c2,
    FAFileExcelO = 0xf1c3,
    FAFilePowerpointO = 0xf1c4,
    FAFilePhotoO = 0xf1c5,
    FAFilePictureO = 0xf1c5,
    FAFileImageO = 0xf1c5,
    FAFileZipO = 0xf1c6,
    FAFileArchiveO = 0xf1c6,
    FAFileSoundO = 0xf1c7,
    FAFileAudioO = 0xf1c7,
    FAFileMovieO = 0xf1c8,
    FAFileVideoO = 0xf1c8,
    FAFileCodeO = 0xf1c9,
    FAVine = 0xf1ca,
    FACodepen = 0xf1cb,
    FAJsfiddle = 0xf1cc,
    FALifeBouy = 0xf1cd,
    FALifeBuoy = 0xf1cd,
    FALifeSaver = 0xf1cd,
    FASupport = 0xf1cd,
    FALifeRing = 0xf1cd,
    FACircleONotch = 0xf1ce,
    FARa = 0xf1d0,
    FARebel = 0xf1d0,
    FAGe = 0xf1d1,
    FAEmpire = 0xf1d1,
    FAGitSquare = 0xf1d2,
    FAGit = 0xf1d3,
    FAYCombinatorSquare = 0xf1d4,
    FAYcSquare = 0xf1d4,
    FAHackerNews = 0xf1d4,
    FATencentWeibo = 0xf1d5,
    FAQq = 0xf1d6,
    FAWechat = 0xf1d7,
    FAWeixin = 0xf1d7,
    FASend = 0xf1d8,
    FAPaperPlane = 0xf1d8,
    FASendO = 0xf1d9,
    FAPaperPlaneO = 0xf1d9,
    FAHistory = 0xf1da,
    FACircleThin = 0xf1db,
    FAHeader = 0xf1dc,
    FAParagraph = 0xf1dd,
    FASliders = 0xf1de,
    FAShareAlt = 0xf1e0,
    FAShareAltSquare = 0xf1e1,
    FABomb = 0xf1e2,
    FASoccerBallO = 0xf1e3,
    FAFutbolO = 0xf1e3,
    FATty = 0xf1e4,
    FABinoculars = 0xf1e5,
    FAPlug = 0xf1e6,
    FASlideshare = 0xf1e7,
    FATwitch = 0xf1e8,
    FAYelp = 0xf1e9,
    FANewspaperO = 0xf1ea,
    FAWifi = 0xf1eb,
    FACalculator = 0xf1ec,
    FAPaypal = 0xf1ed,
    FAGoogleWallet = 0xf1ee,
    FACcVisa = 0xf1f0,
    FACcMastercard = 0xf1f1,
    FACcDiscover = 0xf1f2,
    FACcAmex = 0xf1f3,
    FACcPaypal = 0xf1f4,
    FACcStripe = 0xf1f5,
    FABellSlash = 0xf1f6,
    FABellSlashO = 0xf1f7,
    FATrash = 0xf1f8,
    FACopyright = 0xf1f9,
    FAAt = 0xf1fa,
    FAEyedropper = 0xf1fb,
    FAPaintBrush = 0xf1fc,
    FABirthdayCake = 0xf1fd,
    FAAreaChart = 0xf1fe,
    FAPieChart = 0xf200,
    FALineChart = 0xf201,
    FALastfm = 0xf202,
    FALastfmSquare = 0xf203,
    FAToggleOff = 0xf204,
    FAToggleOn = 0xf205,
    FABicycle = 0xf206,
    FABus = 0xf207,
    FAIoxhost = 0xf208,
    FAAngellist = 0xf209,
    FACc = 0xf20a,
    FAShekel = 0xf20b,
    FASheqel = 0xf20b,
    FAIls = 0xf20b,
    FAMeanpath = 0xf20c,
    FABuysellads = 0xf20d,
    FAConnectdevelop = 0xf20e,
    FADashcube = 0xf210,
    FAForumbee = 0xf211,
    FALeanpub = 0xf212,
    FASellsy = 0xf213,
    FAShirtsinbulk = 0xf214,
    FASimplybuilt = 0xf215,
    FASkyatlas = 0xf216,
    FACartPlus = 0xf217,
    FACartArrowDown = 0xf218,
    FADiamond = 0xf219,
    FAShip = 0xf21a,
    FAUserSecret = 0xf21b,
    FAMotorcycle = 0xf21c,
    FAStreetView = 0xf21d,
    FAHeartbeat = 0xf21e,
    FAVenus = 0xf221,
    FAMars = 0xf222,
    FAMercury = 0xf223,
    FAIntersex = 0xf224,
    FATransgender = 0xf224,
    FATransgenderAlt = 0xf225,
    FAVenusDouble = 0xf226,
    FAMarsDouble = 0xf227,
    FAVenusMars = 0xf228,
    FAMarsStroke = 0xf229,
    FAMarsStrokeV = 0xf22a,
    FAMarsStrokeH = 0xf22b,
    FANeuter = 0xf22c,
    FAGenderless = 0xf22d,
    FAFacebookOfficial = 0xf230,
    FAPinterestP = 0xf231,
    FAWhatsapp = 0xf232,
    FAServer = 0xf233,
    FAUserPlus = 0xf234,
    FAUserTimes = 0xf235,
    FAHotel = 0xf236,
    FABed = 0xf236,
    FAViacoin = 0xf237,
    FATrain = 0xf238,
    FASubway = 0xf239,
    FAMedium = 0xf23a,
    FAYc = 0xf23b,
    FAYCombinator = 0xf23b,
    FAOptinMonster = 0xf23c,
    FAOpencart = 0xf23d,
    FAExpeditedssl = 0xf23e,
    FABattery4 = 0xf240,
    FABatteryFull = 0xf240,
    FABattery3 = 0xf241,
    FABatteryThreeQuarters = 0xf241,
    FABattery2 = 0xf242,
    FABatteryHalf = 0xf242,
    FABattery1 = 0xf243,
    FABatteryQuarter = 0xf243,
    FABattery0 = 0xf244,
    FABatteryEmpty = 0xf244,
    FAMousePointer = 0xf245,
    FAICursor = 0xf246,
    FAObjectGroup = 0xf247,
    FAObjectUngroup = 0xf248,
    FAStickyNote = 0xf249,
    FAStickyNoteO = 0xf24a,
    FACcJcb = 0xf24b,
    FACcDinersClub = 0xf24c,
    FAClone = 0xf24d,
    FABalanceScale = 0xf24e,
    FAHourglassO = 0xf250,
    FAHourglass1 = 0xf251,
    FAHourglassStart = 0xf251,
    FAHourglass2 = 0xf252,
    FAHourglassHalf = 0xf252,
    FAHourglass3 = 0xf253,
    FAHourglassEnd = 0xf253,
    FAHourglass = 0xf254,
    FAHandGrabO = 0xf255,
    FAHandRockO = 0xf255,
    FAHandStopO = 0xf256,
    FAHandPaperO = 0xf256,
    FAHandScissorsO = 0xf257,
    FAHandLizardO = 0xf258,
    FAHandSpockO = 0xf259,
    FAHandPointerO = 0xf25a,
    FAHandPeaceO = 0xf25b,
    FATrademark = 0xf25c,
    FARegistered = 0xf25d,
    FACreativeCommons = 0xf25e,
    FAGg = 0xf260,
    FAGgCircle = 0xf261,
    FATripadvisor = 0xf262,
    FAOdnoklassniki = 0xf263,
    FAOdnoklassnikiSquare = 0xf264,
    FAGetPocket = 0xf265,
    FAWikipediaW = 0xf266,
    FASafari = 0xf267,
    FAChrome = 0xf268,
    FAFirefox = 0xf269,
    FAOpera = 0xf26a,
    FAInternetExplorer = 0xf26b,
    FATv = 0xf26c,
    FATelevision = 0xf26c,
    FAContao = 0xf26d,
    FA500px = 0xf26e,
    FAAmazon = 0xf270,
    FACalendarPlusO = 0xf271,
    FACalendarMinusO = 0xf272,
    FACalendarTimesO = 0xf273,
    FACalendarCheckO = 0xf274,
    FAIndustry = 0xf275,
    FAMapPin = 0xf276,
    FAMapSigns = 0xf277,
    FAMapO = 0xf278,
    FAMap = 0xf279,
    FACommenting = 0xf27a,
    FACommentingO = 0xf27b,
    FAHouzz = 0xf27c,
    FAVimeo = 0xf27d,
    FABlackTie = 0xf27e,
    FAFonticons = 0xf280
};

@interface NSString (FontAwesome)

+ (NSString *)fa_stringForFontAwesomeIcon:(FAIcon)icon;

@end

NS_ASSUME_NONNULL_END
