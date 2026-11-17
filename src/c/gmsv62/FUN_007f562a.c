/* FUN_007f562a - 0x007f562a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007f562a(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1,&param_1);
  if (-1 < iVar2) {
    (**(code **)(*piVar1 + 0x90))
              (piVar1,param_1,param_2,DAT_00980690,DAT_00980694,DAT_00980698,DAT_0098069c,
               DAT_00980690,DAT_00980694,DAT_00980698,DAT_0098069c);
  }
  return;
}


