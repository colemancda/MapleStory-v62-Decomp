/* FUN_00818133 - 0x00818133 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00818133(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00819a37(&param_2,0);
  if (iVar1 != 0) {
    FUN_008198eb(iVar1);
  }
  if (*(int **)(param_1 + 0x84) == param_2) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if ((*(int *)(param_1 + 0x90) != 0) && (*(int **)(param_1 + 0x88) == param_2)) {
    FUN_00818724();
  }
  if (*(int **)(param_1 + 0x80) == param_2) {
    if (DAT_009784c0 != 0) {
      FUN_005265cf(1);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097c228);
    if (iVar1 != 0) {
      piVar2 = (int *)(-(uint)(param_2 != (int *)0x0) & (uint)(param_2 + -1));
      goto LAB_008181cc;
    }
  }
  piVar2 = (int *)0x0;
LAB_008181cc:
  if (piVar2 != (int *)0x0) {
    if (piVar2 == *(int **)(param_1 + 0x7c)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    if (*(int **)(param_1 + 0x78) == piVar2) {
      (**(code **)(*piVar2 + 0x28))(0);
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (DAT_0097c270 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *DAT_0097c278;
      }
      if (iVar1 != 0) {
        FUN_00818069(iVar1);
      }
    }
  }
  return;
}


