/* FUN_005a05c5 - 0x005a05c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005a05c5(void)

{
  short *psVar1;
  
  psVar1 = (short *)FUN_005a05f1(0);
  if (psVar1 != (short *)0x0) {
    if (*psVar1 == 8) {
      return *(undefined4 *)(psVar1 + 4);
    }
    if ((*psVar1 == 0x4008) && (*(undefined4 **)(psVar1 + 4) != (undefined4 *)0x0)) {
      return **(undefined4 **)(psVar1 + 4);
    }
  }
  return 0;
}


