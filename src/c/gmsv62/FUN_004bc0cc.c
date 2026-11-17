/* FUN_004bc0cc - 0x004bc0cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004bc0cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_004b8b3d();
  FUN_004bbe49(param_1);
  iVar1 = FUN_004bbe61();
  if (iVar1 == 0) {
    FUN_004b8b3d();
    FUN_004bbe49(param_1);
    iVar1 = FUN_004bbe61();
    if (iVar1 != 0) {
      return param_1;
    }
    FUN_004b8b3d();
    FUN_004bbe49(param_2);
    iVar1 = FUN_004bbe61();
    if (iVar1 != 0) {
      return param_3;
    }
  }
  else {
    FUN_004b8b3d();
    FUN_004bbe49(param_2);
    iVar1 = FUN_004bbe61();
    if (iVar1 == 0) {
      FUN_004b8b3d();
      FUN_004bbe49(param_1);
      iVar1 = FUN_004bbe61();
      if (iVar1 == 0) {
        return param_1;
      }
      return param_3;
    }
  }
  return param_2;
}


