/* FUN_008890a8 - 0x008890a8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008890a8(void)

{
  if (DAT_009809f0 == 0) {
    FUN_0087d9ec(0xb);
    if (DAT_009809f0 == 0) {
      FUN_008890ec();
      DAT_009809f0 = DAT_009809f0 + 1;
    }
    FUN_0087da4d(0xb);
  }
  return;
}


