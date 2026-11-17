/* ptr_0086e174 - 0x0086e174 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0086e174(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EDI;
  
  if (*(int *)(in_EAX + 4) == 0) {
    *(undefined4 *)(in_EAX + 8) = 0x3f7;
    *(undefined4 *)(DAT_0097fc64 + 0xc) = unaff_EDI;
    return 1;
  }
  iVar1 = FUN_0086698a(0x3f7,unaff_EDI);
  if (iVar1 == 0) {
    if (DAT_0097fc64 != 0) {
      uVar2 = FUN_00875080(&DAT_0096e338,0x3f7);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
    }
    *(undefined1 *)(DAT_0097fc64 + 0x23) = 1;
    return 0;
  }
  return 1;
}


