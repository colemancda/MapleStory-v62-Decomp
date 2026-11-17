/* ptr_0086e2bc - 0x0086e2bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0086e2bc(void)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  undefined4 uVar2;
  undefined4 unaff_EDI;
  
  if (unaff_ESI == 500) {
    uVar2 = 0x3f6;
    unaff_EDI = 500;
  }
  else {
    uVar2 = 1000;
  }
  if (*(int *)(in_EAX + 4) == 0) {
    *(undefined4 *)(in_EAX + 8) = uVar2;
    *(undefined4 *)(DAT_0097fc64 + 0xc) = unaff_EDI;
  }
  else {
    iVar1 = FUN_0086698a(uVar2,unaff_EDI);
    if (iVar1 == 0) {
      if (DAT_0097fc64 != 0) {
        uVar2 = FUN_00875080(&DAT_0096e338,uVar2,unaff_EDI);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar2);
      }
      *(undefined1 *)(DAT_0097fc64 + 0x23) = 1;
      return 0;
    }
  }
  return 1;
}


