/* FUN_00552e1d - 0x00552e1d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00552e1d(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_0054e7b3(param_1);
  if (iVar2 != 0) {
    if (param_2 == 1) {
      sVar1 = *(short *)(iVar2 + 0x19a);
    }
    else if (param_2 == 2) {
      sVar1 = *(short *)(iVar2 + 0x19c);
    }
    else if (param_2 == 3) {
      sVar1 = *(short *)(iVar2 + 0x19e);
    }
    else {
      if (param_2 != 4) {
        return 100;
      }
      sVar1 = *(short *)(iVar2 + 0x198);
    }
    if (0 < sVar1) {
      return (int)sVar1;
    }
  }
  return 0;
}


