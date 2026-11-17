/* FUN_0077277d - 0x0077277d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077277d(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x28);
  iVar1 = *(int *)(iVar2 + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    uVar3 = *(undefined4 *)(iVar2 + 0x818);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00772cd7(uVar3,unaff_EBP + -0x4c);
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar2 = *(int *)(unaff_EBP + -0x38) + 1;
    }
    else {
      iVar2 = *(int *)(unaff_EBP + -0x38) + -1;
    }
    uVar3 = *(undefined4 *)(unaff_EBP + -0x4c);
    FUN_00429303(uVar3,iVar2);
    FUN_004ead58(uVar3,iVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00770582();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


