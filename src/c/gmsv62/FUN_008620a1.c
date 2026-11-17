/* FUN_008620a1 - 0x008620a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_008620a1(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 != *(int **)(param_1 + 0x1c)) {
    do {
      piVar1 = (int *)*param_2;
      piVar2 = (int *)FUN_008623b5(param_2);
      if (param_3 == 0) {
        FUN_00862b53();
      }
      else {
        if (param_2[0x26] == 0) {
          FUN_00862b53();
        }
        FUN_00862aa0(param_2 + 0x27,param_3);
      }
      if (param_2[0x26] == 0) {
        FUN_00862b53();
      }
      *piVar2 = param_2[0x27];
      piVar2[1] = param_2[0x28];
      piVar2[2] = param_2[0x29];
      piVar2[3] = param_2[0x2a];
      param_2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x1c));
  }
  return;
}


