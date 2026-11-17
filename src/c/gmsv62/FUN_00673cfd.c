/* FUN_00673cfd - 0x00673cfd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00673cfd(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_120 [260];
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined4 local_8;
  
  (*DAT_0097b4a8)(&local_18);
  FUN_00674439(param_1,s_______d__d__d__02d__02d__02d__03_0096a298,local_18,local_16,local_12,
               local_10,local_e,local_c,local_a);
  uVar3 = (*DAT_0097b3ac)();
  uVar3 = (*DAT_0097b390)(uVar3);
  FUN_00674439(param_1,s_PID__X___TID__X__0096a284,uVar3);
  piVar1 = (int *)*param_2;
  uVar3 = FUN_00673f33(*piVar1);
  FUN_00674439(param_1,s_Exception_code___08X__s_0096a26c,*piVar1,uVar3);
  if ((*piVar1 == -0x17ffffff) && (piVar1[4] != 0)) {
    FUN_00674439(param_1,s_with_TID__lX__0096a25c,piVar1[5]);
  }
  FUN_006740a7(piVar1[3],local_120,0x104,&local_8,&local_1c);
  FUN_00674439(param_1,s_Fault_Address___08X__02X__08X_Mo_0096a22c,piVar1[3],local_8,local_1c,
               local_120);
  iVar2 = param_2[1];
  FUN_00674439(param_1,s_Registers__0096a21c);
  FUN_00674439(param_1,s_EAX__08X_EBX__08X_ECX__08X_EDX___0096a1dc,*(undefined4 *)(iVar2 + 0xb0),
               *(undefined4 *)(iVar2 + 0xa4),*(undefined4 *)(iVar2 + 0xac),
               *(undefined4 *)(iVar2 + 0xa8),*(undefined4 *)(iVar2 + 0xa0),
               *(undefined4 *)(iVar2 + 0x9c));
  FUN_00674439(param_1,s_CS_EIP__04X__08X_0096a1c8,*(undefined4 *)(iVar2 + 0xbc),
               *(undefined4 *)(iVar2 + 0xb8));
  FUN_00674439(param_1,s_SS_ESP__04X__08X_EBP__08X_0096a1a8,*(undefined4 *)(iVar2 + 200),
               *(undefined4 *)(iVar2 + 0xc4),*(undefined4 *)(iVar2 + 0xb4));
  FUN_00674439(param_1,s_DS__04X_ES__04X_FS__04X_GS__04X_0096a180,*(undefined4 *)(iVar2 + 0x98),
               *(undefined4 *)(iVar2 + 0x94),*(undefined4 *)(iVar2 + 0x90),
               *(undefined4 *)(iVar2 + 0x8c));
  FUN_00674439(param_1,s_Flags__08X_0096a170,*(undefined4 *)(iVar2 + 0xc0));
  iVar4 = FUN_0067447b();
  if (iVar4 == 0) {
    FUN_00674439(param_1,s_DBGHELP_DLL_or_its_exported_func_0096a13c);
    FUN_00674134(iVar2);
  }
  else {
    FUN_00674606(param_2);
    FUN_0067424b(iVar2);
    (**(code **)(param_1 + 0x130))(*(undefined4 *)(param_1 + 0x128));
    FUN_00674439(param_1,&DAT_00964314);
  }
  return;
}


