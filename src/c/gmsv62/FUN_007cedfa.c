/* FUN_007cedfa - 0x007cedfa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007cedfa(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  uVar5 = 0x80;
  uVar3 = FUN_0066996b(local_24,param_2);
  FUN_006f5512(uVar3,uVar5);
  if (param_1[0x149] == 0) {
    FUN_00424561();
    iVar1 = *param_1;
    FUN_006f5512(local_14,0x80);
    (**(code **)(iVar1 + 0x18))();
    uVar3 = FUN_00670af0(local_24,3);
    FUN_006f5b1a(local_34,uVar3);
    cVar2 = FUN_006f5b9d();
    if (cVar2 == '\0') {
      puVar4 = (undefined4 *)FUN_004c2648();
      FUN_00793488(*puVar4);
    }
    FUN_006f5b1a(local_34,&DAT_0097c060);
    cVar2 = FUN_006f5bb6();
    if (cVar2 != '\0') {
      FUN_004456be();
    }
  }
  return;
}


