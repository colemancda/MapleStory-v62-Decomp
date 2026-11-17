/* FUN_004bc72a - 0x004bc72a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004bc72a(void)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((1 < *(uint *)(extraout_ECX + 0x50)) && (*(int *)(DAT_00978364 + 0x80) != 0)) {
    uVar1 = -(uint)(*(int *)(extraout_ECX + 0x5c) != 0) & *(int *)(extraout_ECX + 0x5c) + 8U;
    *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar1 != 0) & uVar1 - 8;
    FUN_004b3f35();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar1 = FUN_004b41a1(unaff_EBP + -0x18,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b3f52();
    if (uVar1 != 0) {
      *(uint *)(unaff_EBP + -0x10) = uVar1;
      do {
        if (*(int *)(unaff_EBP + 8) == 0) {
          if (uVar1 == *(uint *)(extraout_ECX + 0x58)) {
            uVar1 = *(uint *)(extraout_ECX + 0x54);
          }
          else {
            iVar2 = *(int *)((-(uint)(uVar1 != 0) & uVar1 - 0x10) + 4);
LAB_004bc7da:
            uVar1 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
          }
        }
        else {
          if (uVar1 != *(uint *)(extraout_ECX + 0x54)) {
            iVar2 = *(int *)((-(uint)(uVar1 != 0) & uVar1 - 0x10) + 8);
            goto LAB_004bc7da;
          }
          uVar1 = *(uint *)(extraout_ECX + 0x58);
        }
        if (uVar1 == *(uint *)(unaff_EBP + -0x10)) break;
        FUN_00817f6e(-(uint)(*(int *)(uVar1 + 4) != 0) & *(int *)(uVar1 + 4) + 4U);
        iVar2 = FUN_004b3d90();
      } while (iVar2 == 0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


