/* FUN_00871480 - 0x00871480 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00871480(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008e7ae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1[2] != 0) {
    do {
      uVar1 = _rand();
      puVar2 = (undefined4 *)((uVar1 / (uint)param_1[4]) * param_1[3] + param_1[7]);
    } while ((undefined4 *)param_1[2] == puVar2);
    lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
    EnterCriticalSection(lpCriticalSection);
    local_4 = 0;
    iVar3 = FUN_008712a0();
    if (iVar3 != 0) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar1 = param_1[3];
        puVar5 = (undefined4 *)param_1[2];
        puVar6 = puVar2;
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        uVar1 = param_1[3];
        puVar5 = (undefined4 *)param_1[2];
        for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        param_1[2] = puVar2;
      }
      FUN_00871280();
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  ExceptionList = local_c;
  return;
}


