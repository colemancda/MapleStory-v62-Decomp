/* FUN_0076be33 - 0x0076be33 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076be33(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int local_6c;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x3c);
  iVar1 = *(int *)(iVar3 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    local_6c = unaff_EBP + -0x6c;
    uVar2 = *(undefined4 *)(iVar3 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_0076c53a(uVar2);
    if ((*(int *)(unaff_EBP + -0x6c) != 0) &&
       (((iVar3 == 0 || (iVar3 == 1)) && (DAT_0097bd60 == 0)))) {
      local_6c = 0;
      iVar3 = FUN_006d1f73();
      if (iVar3 != 0) {
        *(int **)(unaff_EBP + -0x10) = &local_6c;
        local_6c = 0;
        FUN_00414f8b(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_006d5f10();
        FUN_006d5c28();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_6c = 0x76bec1;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


