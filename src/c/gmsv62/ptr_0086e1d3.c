/* ptr_0086e1d3 - 0x0086e1d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0086e1d3(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00873e10();
  iVar2 = FUN_0086698a(0x3f9,uVar1);
  if (iVar2 == 0) {
    if (DAT_0097fc64 != 0) {
      uVar1 = FUN_00875080(&DAT_0096e338,0x3f9,uVar1);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar1);
    }
    *(undefined1 *)(DAT_0097fc64 + 0x23) = 1;
    return 0;
  }
  return 1;
}


