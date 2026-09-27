// Target definition
#define RG_TARGET_NAME             "ESPlay-S3"

// ==========================================
// Storage (Internal Flash - No SD Card)
// ==========================================
#define RG_STORAGE_DRIVER           4           // 4 = Internal SPI Flash (VFS)
#define RG_STORAGE_FLASH_PARTITION  "vfs"
#define RG_STORAGE_ROOT             "/flash"

// ==========================================
// Audio Options (Disabled)
// ==========================================
#define RG_AUDIO_USE_INT_DAC        0
#define RG_AUDIO_USE_EXT_DAC        0

// ==========================================
// Display (ST7735 160x128)
// ==========================================
#define RG_SCREEN_DRIVER            1           // 1 = ST7735
#define RG_SCREEN_HOST              SPI2_HOST
#define RG_SCREEN_SPEED             SPI_MASTER_FREQ_40M
#define RG_SCREEN_BACKLIGHT         0           // 0 = Tied to 3.3V
#define RG_SCREEN_WIDTH             160
#define RG_SCREEN_HEIGHT            128
#define RG_SCREEN_ROTATE            0
#define RG_SCREEN_VISIBLE_AREA      {0, 0, 0, 0}
#define RG_SCREEN_SAFE_AREA         {0, 0, 0, 0}

// SPI Display Pins (Matching your wiring)
#define RG_GPIO_LCD_MISO            GPIO_NUM_NC
#define RG_GPIO_LCD_MOSI            GPIO_NUM_11
#define RG_GPIO_LCD_CLK             GPIO_NUM_12
#define RG_GPIO_LCD_CS              GPIO_NUM_10
#define RG_GPIO_LCD_DC              GPIO_NUM_8
#define RG_GPIO_LCD_RST             GPIO_NUM_9
#define RG_GPIO_LCD_BCKL            GPIO_NUM_NC

// ==========================================
// Gamepad Configuration (Active-LOW buttons)
// ==========================================
#define RG_GAMEPAD_DRIVER           1   // 1 = Direct GPIO
#define RG_GAMEPAD_GPIO_MAP {\
    {RG_KEY_UP,     .num = GPIO_NUM_1,  .pullup = 1, .level = 0},\
    {RG_KEY_DOWN,   .num = GPIO_NUM_2,  .pullup = 1, .level = 0},\
    {RG_KEY_LEFT,   .num = GPIO_NUM_3,  .pullup = 1, .level = 0},\
    {RG_KEY_RIGHT,  .num = GPIO_NUM_4,  .pullup = 1, .level = 0},\
    {RG_KEY_A,      .num = GPIO_NUM_5,  .pullup = 1, .level = 0},\
    {RG_KEY_B,      .num = GPIO_NUM_6,  .pullup = 1, .level = 0},\
    {RG_KEY_START,  .num = GPIO_NUM_7,  .pullup = 1, .level = 0},\
    {RG_KEY_SELECT, .num = GPIO_NUM_21, .pullup = 1, .level = 0},\
    {RG_KEY_MENU,   .num = GPIO_NUM_NC, .pullup = 0, .level = 0},\
}

// Open Menu with START + SELECT combo
#define RG_GAMEPAD_HOTKEY_MENU      (RG_KEY_START | RG_KEY_SELECT)

// Disable Battery Monitoring
#define RG_BATTERY_DRIVER           0
