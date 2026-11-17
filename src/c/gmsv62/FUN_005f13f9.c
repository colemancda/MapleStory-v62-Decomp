/* FUN_005f13f9 - 0x005f13f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f13f9(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  uVar2 = FUN_0042452b();
  if ((uVar2 & 0xff) != 0) {
    *(uint *)(unaff_EBP + -0x10) = uVar2 & 0xff;
    do {
      iVar3 = FUN_0042459a();
      FUN_0045cdbc(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0044590d();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004b876a(*(undefined4 *)(unaff_EBP + 8));
      iVar4 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x28);
      while (iVar4 != 0) {
        piVar1 = (int *)(iVar4 + 0x10);
        iVar4 = *(int *)(iVar4 + 4);
        if ((*piVar1 != 0) && (**(int **)(*piVar1 + 0x98) == iVar3)) {
          FUN_005f3a71(iVar3);
          FUN_00414f8b(unaff_EBP + -0x14);
          FUN_005ea80c(unaff_EBP + -0x1c8);
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined ***)(unaff_EBP + -0x1c8) = &PTR_LAB_008e84a0;
      FUN_00414ebb();
      piVar1 = (int *)(unaff_EBP + -0x10);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


