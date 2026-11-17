/* FUN_00760e21 - 0x00760e21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00760e21(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 local_14;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  if (uVar1 == 2000) {
    local_14 = 0;
    FUN_007632b1();
  }
  else if ((2999 < uVar1) && (uVar1 < 0xbbb)) {
    local_14 = 0;
    iVar2 = DAT_0097951c + 0x620;
    *(undefined4 **)(unaff_EBP + 8) = &local_14;
    FUN_00414f8b(iVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_005afea1();
    iVar2 = FUN_005af3ee();
    FUN_00766ef5(iVar2 + -3000 + uVar1);
    uVar3 = thunk_FUN_0045e2eb();
    FUN_00760ecf(uVar3);
    local_14 = 1;
    FUN_008319e8();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


