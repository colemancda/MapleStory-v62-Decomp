/* FUN_00849105 - 0x00849105 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00849105(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004becbc(200,0);
  if ((iVar1 == 0) || (DAT_00978360 == 0)) goto LAB_008491c3;
  uVar3 = *(undefined4 *)(unaff_EBP + 8);
  iVar1 = FUN_007c0104(uVar3);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
LAB_0084915e:
    if (iVar1 == 0) goto LAB_008491c3;
  }
  else if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_00978140 + 8);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x2088);
    goto LAB_0084915e;
  }
  FUN_0060142b(0x59,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_007d1e08();
  FUN_00457d37(uVar2);
  FUN_00457d37(uVar3);
  FUN_00457cda(*(undefined4 *)(unaff_EBP + 0x10));
  FUN_004751b2(unaff_EBP + -0x1c);
  *(undefined4 *)(extraout_ECX + 0x208c) = 1;
  uVar3 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x2090) = uVar3;
  FUN_0045ebca();
LAB_008491c3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


