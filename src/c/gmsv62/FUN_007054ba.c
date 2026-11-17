/* FUN_007054ba - 0x007054ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007054ba(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  uint uVar4;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  *extraout_ECX = 0;
  FUN_0087b2f0(extraout_ECX + 1,8,0xf,&LAB_00705c42,FUN_00705c2c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    iVar3 = 0;
    *(int *)(unaff_EBP + -0x14) = iVar1 + 1;
    do {
      if ((*(int *)(unaff_EBP + -0x14) < 3) || (5 < *(int *)(unaff_EBP + -0x14))) {
        puVar2 = (undefined4 *)FUN_004029b9(0x18);
        if (puVar2 == (undefined4 *)0x0) goto LAB_00705546;
        FUN_00705435();
        *puVar2 = &PTR_FUN_008f0788;
      }
      else {
        puVar2 = (undefined4 *)FUN_004029b9(0x18);
        if (puVar2 == (undefined4 *)0x0) {
LAB_00705546:
          puVar2 = (undefined4 *)0x0;
        }
        else {
          FUN_00705435();
          *puVar2 = &PTR_FUN_008f0798;
        }
      }
      FUN_00705c49(puVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 3;
    iVar1 = *(int *)(unaff_EBP + -0x14);
  } while (*(int *)(unaff_EBP + -0x10) < 0xf);
  uVar4 = 0;
  while( true ) {
    iVar1 = **(int **)(unaff_EBP + 8);
    if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar4)) goto LAB_00705591;
    iVar1 = FUN_007055a4(*(undefined4 *)(iVar1 + uVar4 * 4));
    if (iVar1 == 0) break;
    uVar4 = uVar4 + 1;
  }
  *extraout_ECX = 1;
LAB_00705591:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


