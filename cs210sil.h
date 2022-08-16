/* cs210sil.h
 * =============================================================
 *    Name:
 * Section:
 * Purpose: Creating a safe input library
 * =============================================================
 */

/** ----------------------------------------------
 * @brief saftely read one integer from stdin
 * @return the integer value read (if successful)
 * pre none
 * post function exits if no integer was read
 */
int getIntegerSafe();

/** ----------------------------------------------
 * @brief saftely read one long from stdin
 * @return the long value read (if successful)
 * pre none
 * post function exits if no long was read
 */
long getLongSafe();

/** ----------------------------------------------
 * @brief saftely read one float from stdin
 * @return the float value read (if successful)
 * pre none
 * post function exits if no float was read
 */
float getFloatSafe();

/** ----------------------------------------------
 * @brief saftely read one double from stdin
 * @return the double value read (if successful)
 * pre none
 * post function exits if no double was read
 */
double getDoubleSafe();

/** ----------------------------------------------
 * @brief saftely read one char from stdin
 * @return the char value read (if successful)
 * pre none
 * post function exits if no char was read
 */
char getCharSafe();
