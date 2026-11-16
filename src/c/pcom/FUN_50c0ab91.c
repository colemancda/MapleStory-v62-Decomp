/* FUN_50c0ab91 - 0x50c0ab91 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0ab91(int *param_1,int param_2)

{
  void *this;
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1;
  this = (void *)(-(uint)(param_2 != 0) & param_2 + 4U);
  if (*param_1 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = *(int **)(*param_1 + -4);
  }
  FUN_50c0b8ac(this,(int *)&param_1);
  if ((*(byte *)((int)this + 8) & 0x10) != 0) {
    FUN_50c0bba1(piVar2,(uint)param_1,1);
    piVar1 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      do {
        FUN_50c0b747(*piVar2 + (int)piVar1 * 8);
        piVar1 = (int *)((int)piVar1 + 1);
      } while (piVar1 < param_1);
    }
  }
  piVar2 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    do {
      FUN_50c0a6bf();
      piVar2 = (int *)((int)piVar2 + 1);
    } while (piVar2 < param_1);
  }
  return;
}


