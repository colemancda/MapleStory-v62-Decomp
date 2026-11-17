/* FUN_00828343 - 0x00828343 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00828343(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  CHAR local_408 [1024];
  undefined1 local_8 [4];
  
  if (param_1 == 0) {
    iVar1 = (*DAT_0097b44c)(param_2,0x40000000,0,0,4,0x80000000,0);
    if (iVar1 != -1) {
      (*DAT_0097b460)(iVar1,0,0,2);
      if (DAT_00978134 == 0) {
        wsprintfA(local_408,s_ver__d_0096c6b0,0x3e);
      }
      else {
        puVar2 = (undefined4 *)FUN_0082841a(&param_2);
        uVar3 = FUN_008284d7();
        uVar3 = FUN_0082847d(uVar3);
        wsprintfA(local_408,s_ver__d_CharacterName__s___WorldI_0096c6bc,0x3e,*puVar2,uVar3);
        FUN_00414ebb();
      }
      uVar3 = (*DAT_0097b4c0)(local_408,local_8,0);
      (*DAT_0097b454)(iVar1,local_408,uVar3);
      (*DAT_0097b388)(iVar1);
    }
  }
  return;
}


