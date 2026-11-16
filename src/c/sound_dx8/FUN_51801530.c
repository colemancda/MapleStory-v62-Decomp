/* FUN_51801530 - 0x51801530 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51801530(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  void *this;
  uint uVar5;
  int unaff_EBP;
  
  FUN_5180ea30();
  uVar3 = (*DAT_5181fadc)();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_51818110;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_51818110;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 **)(unaff_EBP + -0x20) = (undefined4 *)(extraout_ECX + 0xc);
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = *(int *)(extraout_ECX + 0x14);
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  if (iVar4 == 0) {
    iVar4 = *(int *)(extraout_ECX + 0x44);
    if (iVar4 != 0) {
      while( true ) {
        iVar2 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
        uVar3 = *(undefined4 *)(iVar4 + 4);
        *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
        *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
        FUN_51807ca2(unaff_EBP + -0x28);
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x24) + 8);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if ((iVar4 == 0) ||
           ((iVar4 != *(int *)(unaff_EBP + 8) && (iVar4 = (*DAT_5181fa1c)(iVar4,0), iVar4 != 0)))) {
          iVar4 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x10);
          if ((iVar4 == -1) ||
             (iVar4 != *(int *)(unaff_EBP + -0x14) && -1 < iVar4 - *(int *)(unaff_EBP + -0x14))) {
            this = (void *)0x0;
          }
          else {
            this = (void *)(unaff_EBP + -0x3c);
          }
        }
        else {
          this = (void *)(unaff_EBP + -0x50);
        }
        if (this != (void *)0x0) {
          FUN_5180189d(this,unaff_EBP + -0x28);
          FUN_51807d63((void *)(extraout_ECX + 0x38),*(int *)(*(int *)(unaff_EBP + -0x24) + 0xc));
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 4);
          FUN_51801c81((void *)(extraout_ECX + 0x20),(ulong *)(unaff_EBP + -0x18));
          *(int *)(extraout_ECX + 0x1c) = *(int *)(extraout_ECX + 0x1c) + 1;
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          FUN_51801991(unaff_EBP + -0x28);
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) break;
        iVar4 = *(int *)(unaff_EBP + -0x10);
      }
    }
  }
  else {
    FUN_518020a9((void *)(unaff_EBP + -0x3c),extraout_ECX + 0x38,0,0,0);
    FUN_51801d46(extraout_ECX + 0x20);
    *(int *)(extraout_ECX + 0x1c) = *(int *)(extraout_ECX + 0x1c) + 1;
  }
  piVar1 = (int *)(extraout_ECX + 0x10);
  *piVar1 = *piVar1 + -1;
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  uVar5 = *(uint *)(unaff_EBP + -0x44);
  while (uVar5 != 0) {
    iVar4 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    piVar1 = *(int **)(*(int *)(uVar5 + 4) + 4);
    (**(code **)(*piVar1 + 4))(piVar1,extraout_ECX,*(undefined4 *)(*(int *)(uVar5 + 4) + 8),0);
    uVar5 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
  }
  uVar5 = *(uint *)(unaff_EBP + -0x30);
  while (uVar5 != 0) {
    iVar4 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    piVar1 = *(int **)(*(int *)(uVar5 + 4) + 4);
    (**(code **)(*piVar1 + 4))(piVar1,extraout_ECX,*(undefined4 *)(*(int *)(uVar5 + 4) + 8),1);
    uVar5 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_51818110;
  FUN_5180206f(unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_51818110;
  FUN_5180206f(unaff_EBP + -0x50);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}


