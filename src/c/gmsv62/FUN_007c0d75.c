/* FUN_007c0d75 - 0x007c0d75 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007c0d75(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_00879bb8();
  if (*(uint *)(extraout_ECX + 0x30) != 0) {
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    uVar6 = *(uint *)(extraout_ECX + 0x30);
    do {
      iVar3 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
      uVar5 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      iVar3 = *(int *)(uVar6 + 4);
      *(int *)(unaff_EBP + -0x10) = iVar3;
      iVar2 = 0;
      if (iVar3 != 0) {
        InterlockedIncrement((LONG *)(iVar3 + 4));
        iVar2 = *(int *)(unaff_EBP + -0x10);
      }
      iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x1700);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        FUN_0046f2de(unaff_EBP + -0x24);
        iVar3 = (*DAT_0097b57c)(unaff_EBP + -0x24,*puVar1,puVar1[1]);
        if (iVar3 != 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x10);
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_004f6e32(0);
          }
          goto LAB_007c0e1d;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = *(int *)(unaff_EBP + -0x10);
      }
      if (iVar2 != 0) {
        FUN_004f6e32(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      uVar6 = uVar5;
    } while (uVar5 != 0);
  }
  uVar4 = 0;
LAB_007c0e1d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


