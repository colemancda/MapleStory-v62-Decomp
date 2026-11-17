/* FUN_0088570f - 0x0088570f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0088570f(void)

{
  if ((DAT_009806f4 == 1) || ((DAT_009806f4 == 0 && (DAT_00970134 == 1)))) {
    FUN_00885748(0xfc);
    if (DAT_009808c0 != (code *)0x0) {
      (*DAT_009808c0)();
    }
    FUN_00885748(0xff);
  }
  return;
}


