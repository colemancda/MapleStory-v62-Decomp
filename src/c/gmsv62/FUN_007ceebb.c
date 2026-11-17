/* FUN_007ceebb - 0x007ceebb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007ceebb(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  FUN_006f54f2();
  FUN_004245d2(local_14,0x10);
  uVar3 = FUN_00670af0(local_24,3);
  FUN_006f5b1a(local_34,uVar3);
  cVar2 = FUN_006f5bb6();
  if (cVar2 != '\0') {
    puVar4 = (undefined4 *)FUN_004c2648();
    FUN_00793488(*puVar4);
  }
  FUN_006f5512(local_14,0x80);
  FUN_00664410();
  if (param_1[0x149] == 0) {
    iVar1 = *param_1;
    FUN_006f5512(local_14,0x80);
    (**(code **)(iVar1 + 0x18))();
    FUN_006f5b1a(local_34,&DAT_0097c060);
    cVar2 = FUN_006f5bb6();
    if (cVar2 != '\0') {
      FUN_0044581f();
    }
  }
  return;
}


