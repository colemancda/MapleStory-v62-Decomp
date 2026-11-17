/* FUN_00844bd8 - 0x00844bd8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00844bd8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int local_3c;
  
  FUN_00879bb8();
  local_3c = 0x844bf5;
  iVar1 = FUN_007b3c5d();
  if (iVar1 == 0) {
    if ((*(int *)(DAT_00978358 + 0x4e0) == 0) && (*(int *)(DAT_00978358 + 0x4f4) == 0)) {
      local_3c = 0x844c27;
      uVar2 = FUN_0045e4b8();
      if ((uVar2 & 1) == 0) {
        if (DAT_00979178 == 0) {
          local_3c = 0x844c98;
          iVar1 = FUN_00429303();
          if (*(int *)(iVar1 + 0x124) == 0) {
            local_3c = 0;
            iStack_40 = 0;
            uStack_44 = 0;
            puStack_48 = (undefined *)0x0;
            *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_4c;
            FUN_00679d22(&puStack_4c,0x1c1);
            FUN_007db3ad();
          }
          else {
            local_3c = 0x844cd2;
            iVar1 = FUN_007a5c95();
            if (iVar1 != 0) {
              local_3c = 0x69c;
              iStack_40 = 0x844ceb;
              iVar1 = FUN_004029b9();
              *(int *)(unaff_EBP + -0x14) = iVar1;
              *(undefined4 *)(unaff_EBP + -4) = 3;
              if (iVar1 == 0) {
                iVar1 = 0;
              }
              else {
                local_3c = 0x844d00;
                iVar1 = FUN_007e62e9();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
              *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar2 != 0) & uVar2 - 8;
              local_3c = 0x844d27;
              FUN_004c26c4();
              local_3c = 0;
              iStack_40 = 1;
              puStack_4c = (undefined1 *)&uStack_44;
              *(undefined4 **)(unaff_EBP + -0x14) = &uStack_44;
              puStack_48 = (undefined *)0x1ac;
              *(undefined4 *)(unaff_EBP + -4) = 4;
              FUN_00679d22();
              puStack_48 = (undefined *)0x0;
              puStack_4c = (undefined1 *)0x3;
              *(undefined1 *)(unaff_EBP + -4) = 4;
              FUN_004c2677();
              FUN_007eddac();
              local_3c = 0;
              iStack_40 = 0;
              uStack_44 = 0x32;
              puStack_48 = (undefined *)0x0;
              puStack_4c = (undefined1 *)0x0;
              FUN_007edfe1();
              local_3c = 0x844d75;
              FUN_007e6e3c();
              local_3c = 0x844d7d;
              iVar1 = FUN_004bc6a2();
              if (iVar1 == 1) {
                local_3c = 0x844d91;
                iVar1 = FUN_007a5c95();
                if (iVar1 == 0) {
                  local_3c = 0;
                  iStack_40 = 0;
                  uStack_44 = 0;
                  puStack_48 = (undefined *)0x0;
                  *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_4c;
                  puStack_4c = extraout_ECX;
                  FUN_00679d22(&puStack_4c,0x19a);
                  FUN_007db3ad();
                }
                else {
                  local_3c = unaff_EBP + -0x10;
                  iStack_40 = 0x844dc5;
                  FUN_00641b6c();
                  local_3c = 0;
                  iStack_40 = 0;
                  *(undefined1 *)(unaff_EBP + -4) = 6;
                  uStack_44 = 0x844dd3;
                  FUN_0045ed72();
                  iStack_40 = 0x844dda;
                  FUN_0045ee27();
                  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) &&
                     (**(char **)(unaff_EBP + -0x10) != '\0')) {
                    local_3c = 1;
                    iStack_40 = 0;
                    uStack_44 = 1;
                    puStack_48 = (undefined *)0x400;
                    puStack_4c = (undefined1 *)0x844dff;
                    uStack_44 = FUN_00415015();
                    puStack_48 = (undefined *)0x844e05;
                    uVar3 = FUN_00471777();
                    local_3c = -1;
                    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
                    iStack_40 = 0x844e15;
                    FUN_004150c0();
                    if (*(int *)(unaff_EBP + -0x14) == 0) {
                      local_3c = 0;
                      iStack_40 = 0;
                      uStack_44 = 0;
                      puStack_48 = (undefined *)0x0;
                      *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_4c;
                      puStack_4c = extraout_ECX_00;
                      FUN_00679d22(&puStack_4c,0x11d);
                      FUN_007db3ad();
                    }
                    else {
                      if (*(int *)(unaff_EBP + 0x10) != 0) {
                        local_3c = 0xd64;
                        iStack_40 = unaff_EBP + -0x14;
                        uStack_44 = 0x844e57;
                        FUN_00679d22();
                        local_3c = 0x69c;
                        *(undefined1 *)(unaff_EBP + -4) = 7;
                        iStack_40 = 0x844e67;
                        iVar1 = FUN_004029b9();
                        *(int *)(unaff_EBP + -0x18) = iVar1;
                        *(undefined1 *)(unaff_EBP + -4) = 8;
                        if (iVar1 == 0) {
                          iVar1 = 0;
                        }
                        else {
                          local_3c = 0x844e79;
                          iVar1 = FUN_007e62e9();
                        }
                        uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
                        *(uint *)(unaff_EBP + -0x24) = -(uint)(uVar2 != 0) & uVar2 - 8;
                        *(undefined1 *)(unaff_EBP + -4) = 7;
                        local_3c = 0x844ea0;
                        FUN_004c26c4();
                        local_3c = 0;
                        iStack_40 = 0;
                        puStack_48 = (undefined *)(unaff_EBP + -0x14);
                        *(undefined4 **)(unaff_EBP + -0x18) = &uStack_44;
                        *(undefined1 *)(unaff_EBP + -4) = 9;
                        puStack_4c = (undefined1 *)0x844eb5;
                        FUN_00450368();
                        puStack_48 = &DAT_0089c970;
                        puStack_4c = (undefined1 *)0x0;
                        *(undefined1 *)(unaff_EBP + -4) = 9;
                        FUN_004c2677();
                        FUN_007eddac();
                        local_3c = 0;
                        iStack_40 = 0;
                        uStack_44 = 0x844ed8;
                        FUN_007edf11();
                        local_3c = 0x844ee0;
                        FUN_007e6e3c();
                        local_3c = 0x844ee8;
                        FUN_004bc6a2();
                        *(undefined1 *)(unaff_EBP + -4) = 7;
                        local_3c = 0x844ef4;
                        FUN_004c26e1();
                        *(undefined1 *)(unaff_EBP + -4) = 6;
                        local_3c = 0x844f00;
                        FUN_00414ebb();
                      }
                      local_3c = 0;
                      iStack_40 = 0;
                      uStack_44 = 0x6f;
                      puStack_48 = (undefined *)0x844f0c;
                      FUN_0060142b();
                      local_3c = 0;
                      *(undefined1 *)(unaff_EBP + -4) = 0xb;
                      iStack_40 = 0x844f19;
                      uVar3 = FUN_00457cda();
                      local_3c = CONCAT31((int3)((uint)uVar3 >> 8),*(int *)(unaff_EBP + 0x10) != 0)
                                 + 4;
                      iStack_40 = 0x844f2b;
                      FUN_00457cda();
                      iStack_40 = unaff_EBP + -0x10;
                      *(int **)(unaff_EBP + 0x10) = &local_3c;
                      local_3c = 0;
                      uStack_44 = 0x844f3c;
                      FUN_00414f8b();
                      iStack_40 = 0x844f44;
                      FUN_00459cb5();
                      local_3c = 0;
                      iStack_40 = 0x844f4d;
                      FUN_00457cda();
                      local_3c = *(int *)(unaff_EBP + 8);
                      iStack_40 = 0x844f58;
                      FUN_0045d247();
                      local_3c = *(int *)(unaff_EBP + 0xc);
                      iStack_40 = 0x844f63;
                      FUN_00457d37();
                      local_3c = unaff_EBP + -0x38;
                      iStack_40 = 0x844f72;
                      FUN_004751b2();
                      local_3c = 0x8e7;
                      iStack_40 = unaff_EBP + 8;
                      uStack_44 = 0x844f82;
                      puVar4 = (undefined4 *)FUN_00679d86();
                      iStack_40 = *puVar4;
                      local_3c = 100;
                      *(undefined1 *)(unaff_EBP + -4) = 0xc;
                      uStack_44 = 0x844f90;
                      FUN_007d4073();
                      *(undefined1 *)(unaff_EBP + -4) = 0xb;
                      local_3c = 0x844f9e;
                      FUN_00402676();
                      *(undefined1 *)(unaff_EBP + -4) = 6;
                      local_3c = 0x844faa;
                      FUN_0045ebca();
                    }
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 4;
                  local_3c = 0x844fb6;
                  FUN_00414ebb();
                }
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              local_3c = 0x844fc2;
              FUN_004c26e1();
            }
          }
          goto LAB_00844ff9;
        }
        local_3c = 0x9a;
        iStack_40 = unaff_EBP + 0x10;
        uStack_44 = 0x844c76;
        iStack_40 = FUN_00679d22();
        local_3c = 0xc;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        uStack_44 = 0x844c85;
        FUN_00471102();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_3c = *(int *)(unaff_EBP + 0x10);
      }
      else {
        local_3c = 0x99;
        iStack_40 = unaff_EBP + 0x10;
        uStack_44 = 0x844c3e;
        iStack_40 = FUN_00679d22();
        local_3c = 0xc;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        uStack_44 = 0x844c4d;
        FUN_00471102();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_3c = *(int *)(unaff_EBP + 0x10);
      }
    }
    else {
      local_3c = 0xd8b;
      iStack_40 = unaff_EBP + 0x10;
      uStack_44 = 0x844fd7;
      iStack_40 = FUN_00679d22();
      local_3c = 0xc;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_44 = 0x844fe2;
      FUN_00471102();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_3c = *(int *)(unaff_EBP + 0x10);
    }
    if (local_3c != 0) {
      local_3c = local_3c + -0xc;
      iStack_40 = 0x844ff8;
      FUN_00434e38();
    }
  }
LAB_00844ff9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


