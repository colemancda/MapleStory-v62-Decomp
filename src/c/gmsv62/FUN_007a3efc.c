/* FUN_007a3efc - 0x007a3efc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007a3efc(void)

{
  int iVar1;
  
  iVar1 = FUN_0050d2d6();
  if (iVar1 == 0) {
    iVar1 = FUN_007a3f27();
    if (iVar1 == 0) {
      iVar1 = FUN_007a3f46();
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


