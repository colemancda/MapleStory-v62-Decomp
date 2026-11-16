/* FUN_5180c4f3 - 0x5180c4f3 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_5180c4f3(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_5180ce33((void *)(unaff_EBP + -0x20),(int *)(unaff_EBP + -0x18));
  uVar4 = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  piVar1 = *(int **)(extraout_ECX + 0x68);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if ((piVar1 == (int *)0x0) ||
     (iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,unaff_EBP + -0x10,0), iVar2 < 0))
  goto LAB_5180c5ed;
  if (*(int *)(*(int *)(extraout_ECX + 100) + 0x18) == 0) {
    piVar1 = *(int **)(extraout_ECX + 0x68);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    (**(code **)(*piVar1 + 0x24))(piVar1,unaff_EBP + -0x14);
    if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) goto LAB_5180c5cf;
    (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x48))(*(int **)(extraout_ECX + 0x68));
    (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x34))(*(int **)(extraout_ECX + 0x68),0);
  }
  else {
    iVar2 = *(int *)(unaff_EBP + -0x10);
    iVar3 = iVar2 - *(int *)(extraout_ECX + 0x80);
    if (iVar3 < 0) {
      iVar3 = iVar3 + *(int *)(*(int *)(extraout_ECX + 100) + 0x14);
    }
    *(int *)(extraout_ECX + 0x84) = *(int *)(extraout_ECX + 0x84) + iVar3;
    *(int *)(extraout_ECX + 0x80) = iVar2;
    if ((*(int *)(extraout_ECX + 0x78) == -1) ||
       (*(uint *)(extraout_ECX + 0x84) < *(uint *)(extraout_ECX + 0x88))) {
      iVar2 = FUN_5180bf93();
      *(uint *)(extraout_ECX + 0x74) = (uint)(iVar2 == 0);
      if ((iVar2 == 0) != 0) {
        (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x48))(*(int **)(extraout_ECX + 0x68));
      }
LAB_5180c5cf:
      uVar4 = 1;
      *(undefined4 *)(unaff_EBP + -0x1c) = 1;
      goto LAB_5180c5ed;
    }
    (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x48))(*(int **)(extraout_ECX + 0x68));
    *(undefined4 *)(extraout_ECX + 0x78) = 0xffffffff;
    (**(code **)(**(int **)(extraout_ECX + 0x70) + 0x10))();
  }
  uVar4 = 0;
  *(undefined4 *)(extraout_ECX + 0x2c) = 0;
LAB_5180c5ed:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5180c435();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


