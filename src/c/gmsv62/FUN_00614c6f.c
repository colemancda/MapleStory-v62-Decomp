/* FUN_00614c6f - 0x00614c6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00614c6f(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00614cd3();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 400) != 0) {
      FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
      FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
      uVar3 = __ftol();
      uVar4 = __ftol(uVar3);
      cVar1 = FUN_00524ce4(uVar4,uVar3);
      if (cVar1 != '\0') goto LAB_00614ccd;
    }
    uVar3 = 0;
  }
  else {
LAB_00614ccd:
    uVar3 = 1;
  }
  return uVar3;
}


