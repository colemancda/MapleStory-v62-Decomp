/* FUN_0066996b - 0x0066996b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0066996b(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  FUN_006f54f2();
  FUN_004245d2(local_14,0x10);
  FUN_006f5b1a(local_24,&DAT_0097b110);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_0042452b();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x164) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097af30);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_0042452b();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x374) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097af20);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x3a4) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x3b0) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097b0f0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x2e4) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x2f0) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097af40);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x350) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x35c) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097af50);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x32c) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x338) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097b0e0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x4c4) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x4d0) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097aea0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x4e8) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x4f4) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097af60);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x308) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097af60);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x308) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x314) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097aee0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x434) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097afd0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x1dc) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097af70);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097b0c0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x530) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097b0b0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x554) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097b090);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x638) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x644) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097ae50);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x65c) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097adf0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x740) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x74c) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097add0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x794) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x7ac) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097adc0);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x7b8) = uVar2;
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x7c4) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097ad90);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x854) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097ad80);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x884) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097ad70);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x8b0) = uVar2;
  }
  FUN_006f5b1a(local_24,&DAT_0097ad60);
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    FUN_0042459a();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x8dc) = uVar2;
  }
  FUN_0042452b();
  uVar2 = FUN_006717e0();
  *(undefined4 *)(param_1 + 0x8a4) = uVar2;
  FUN_0042452b();
  uVar2 = FUN_006717e0();
  *(undefined4 *)(param_1 + 0x8d0) = uVar2;
  iVar3 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x958);
  do {
    uVar2 = FUN_00670af0(local_24,iVar3);
    FUN_006f5b1a(local_34,uVar2);
    cVar1 = FUN_006f5bb6();
    if (cVar1 != '\0') {
      (**(code **)(*(int *)*puVar4 + 0x18))(param_3);
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 6);
  FUN_006f5512(local_14,0x80);
  return param_2;
}


