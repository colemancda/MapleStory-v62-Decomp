/* FUN_007c0c0f - 0x007c0c0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007c0c0f(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  uint uVar5;
  
  FUN_00879bb8();
  if (*(uint *)(extraout_ECX + 0x30) != 0) {
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    uVar5 = *(uint *)(extraout_ECX + 0x30);
    do {
      iVar2 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
      uVar4 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      iVar2 = *(int *)(uVar5 + 4);
      *(int *)(unaff_EBP + -0x10) = iVar2;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 4));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0043f3d6(unaff_EBP + -0x24,1);
      iVar2 = (*DAT_0097b57c)(unaff_EBP + -0x24,*puVar1,puVar1[1]);
      if (iVar2 != 0) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x10);
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_004f6e32(0);
        }
        goto LAB_007c0ca1;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004f6e32(0);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      uVar5 = uVar4;
    } while (uVar4 != 0);
  }
  uVar3 = 0;
LAB_007c0ca1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


