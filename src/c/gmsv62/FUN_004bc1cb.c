/* FUN_004bc1cb - 0x004bc1cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004bc1cb(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  iVar4 = param_3;
  do {
    if (iVar3 < param_3) {
      FUN_004b8b3d();
      uVar1 = FUN_004bc0c0();
      FUN_004bbe49(uVar1);
      iVar2 = FUN_004bbe61();
      if (iVar2 == 0) goto LAB_004bc215;
    }
    else {
LAB_004bc215:
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 <= param_2) break;
        FUN_004bc0c0();
        FUN_004b8b3d();
        FUN_004bbe49(param_4);
        iVar2 = FUN_004bbe61();
      } while (iVar2 != 0);
      if (iVar4 <= iVar3) {
        return iVar3;
      }
      FUN_004bc48f();
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


