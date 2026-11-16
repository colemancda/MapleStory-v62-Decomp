/* FUN_51814906 - 0x51814906 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


bool __fastcall FUN_51814906(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  local_c = 0;
  local_8 = 0;
  if (piVar1 == (int *)0x0) {
    return false;
  }
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,&local_c,1,0,0);
  return -1 < iVar2;
}


