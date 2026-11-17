/* FUN_00757d85 - 0x00757d85 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00757d85(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  code *pcVar7;
  undefined4 *puStack_15c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x1c) != 0) {
    puStack_15c = (undefined4 *)0x757db9;
    FUN_004031b7();
    iVar4 = *(int *)(extraout_ECX + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar4 == 0) {
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)0x757ddc;
    puVar3 = (undefined4 *)FUN_00425067();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x20),
               (IBinding *)*puVar3);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
  }
  if (*(undefined4 **)(unaff_EBP + 0x20) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x20) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  puStack_15c = (undefined4 *)0x757e21;
  FUN_00414edd();
  iVar4 = *(int *)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    iVar4 = *(int *)(unaff_EBP + -0x2c);
  }
  *(int *)(unaff_EBP + -0x10) = iVar4;
  puStack_15c = (undefined4 *)0x757e3d;
  FUN_007d4a9a();
  iVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iVar4 = (*DAT_0097b584)();
  pcVar7 = VariantInit_exref;
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  if (iVar4 != *(int *)(unaff_EBP + -0x10)) {
    do {
      cVar1 = **(char **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      if (cVar1 == '\\') {
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        cVar1 = **(char **)(unaff_EBP + -0x10);
        if (cVar1 == 'n') {
          if (((*(char **)(unaff_EBP + -0x14) != (char *)0x0) &&
              (**(char **)(unaff_EBP + -0x14) != '\0')) || (0 < iVar6)) {
            *(undefined4 *)(unaff_EBP + 0x14) = 1;
          }
        }
        else if (cVar1 == '\\') {
          *(undefined1 *)(unaff_EBP + -0x14f) = 0;
          *(undefined1 *)(unaff_EBP + -0x150) = 0x5c;
          puStack_15c = (undefined4 *)0x757ebd;
          _strlen((char *)(unaff_EBP + -0x150));
          puStack_15c = (undefined4 *)(unaff_EBP + -0x150);
          FUN_0045efbb();
        }
        else if (cVar1 == '\0') break;
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      }
      else if (cVar1 == '\n') {
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        if ((*(char **)(unaff_EBP + -0x14) != (char *)0x0) &&
           (**(char **)(unaff_EBP + -0x14) != '\0')) {
          *(undefined4 *)(unaff_EBP + 0x14) = 1;
        }
      }
      else if (cVar1 == '#') {
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        if ((*(int *)(unaff_EBP + -0x24) == 0) && (**(char **)(unaff_EBP + -0x10) == 'c')) {
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        }
        *(undefined4 *)(unaff_EBP + -0x28) = 1;
        *(uint *)(unaff_EBP + -0x24) = (uint)(*(int *)(unaff_EBP + -0x24) == 0);
      }
      else {
        iVar4 = *(int *)(unaff_EBP + -0x1c);
        iVar2 = *(int *)(unaff_EBP + -0x10);
        puStack_15c = *(undefined4 **)(unaff_EBP + -0x10);
        FUN_00879c20();
        *(undefined1 *)(unaff_EBP + -0x150 + (iVar4 - iVar2)) = 0;
        _strlen((char *)(unaff_EBP + -0x150));
        puStack_15c = (undefined4 *)(unaff_EBP + -0x150);
        FUN_0045efbb();
        pcVar7 = VariantInit_exref;
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
      }
      puStack_15c = (undefined4 *)0x757f80;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_15c = (undefined4 *)0x757f93;
      FUN_00449713();
      *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_15c;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0044974c();
      iVar4 = FUN_00448ebb();
      if ((*(uint *)(unaff_EBP + 0xc) < (uint)(iVar4 + iVar6 + *(int *)(unaff_EBP + 8))) ||
         (*(int *)(unaff_EBP + 0x14) != 0)) {
        *(undefined1 *)(unaff_EBP + 0x17) = 1;
      }
      else {
        *(undefined1 *)(unaff_EBP + 0x17) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_15c = (undefined4 *)0x757fdc;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_15c = (undefined4 *)0x757fe7;
        FUN_00878dfb();
      }
      if (*(char *)(unaff_EBP + 0x17) == '\0') {
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          if (*(int *)(unaff_EBP + 0x1c) != 0) {
            puStack_15c = (undefined4 *)0x75821d;
            (*pcVar7)();
            puStack_15c = &DAT_00980690;
            puStack_15c = (undefined4 *)FUN_00402e32();
            if ((int)puStack_15c < 0) {
              FUN_00878dfb();
            }
            puStack_15c = (undefined4 *)(unaff_EBP + -0x70);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            (*pcVar7)();
            puStack_15c = (undefined4 *)(unaff_EBP + -0x70);
            iVar4 = FUN_00402e32();
            if (iVar4 < 0) {
              puStack_15c = (undefined4 *)0x758256;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            puStack_15c = (undefined4 *)(unaff_EBP + -0x70);
            FUN_00449749();
            uVar5 = FUN_00449713();
            *(undefined1 **)(unaff_EBP + 0x14) = &stack0xfffffe9c;
            FUN_00448a17(uVar5);
            uVar5 = *(undefined4 *)(unaff_EBP + 0x10);
            iVar4 = *(int *)(unaff_EBP + 8) + iVar6;
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            FUN_004115d9(iVar4,uVar5);
            FUN_00448e3a(iVar4,uVar5);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            puStack_15c = (undefined4 *)0x7582b4;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              puStack_15c = (undefined4 *)0x7582bf;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 5;
            puStack_15c = (undefined4 *)0x7582cf;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              puStack_15c = (undefined4 *)0x7582da;
              FUN_00878dfb();
            }
          }
          puStack_15c = (undefined4 *)0x7582e3;
          (*pcVar7)();
          puStack_15c = (undefined4 *)(unaff_EBP + -0x90);
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            puStack_15c = (undefined4 *)0x7582fc;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          puStack_15c = (undefined4 *)0x75830f;
          FUN_00449713();
          *(undefined4 ***)(unaff_EBP + 0x14) = &puStack_15c;
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          FUN_0044974c();
          iVar4 = FUN_00448ebb();
          iVar6 = iVar6 + iVar4;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          puStack_15c = (undefined4 *)0x758340;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            puStack_15c = (undefined4 *)0x75834b;
            FUN_00878dfb();
          }
          goto LAB_0075834b;
        }
      }
      else {
        cVar1 = **(char **)(unaff_EBP + -0x10);
        if ((cVar1 != '\0') && ((cVar1 == '.' || (cVar1 == ',')))) {
          *(char *)(unaff_EBP + 0x17) = cVar1;
          puStack_15c = (undefined4 *)(unaff_EBP + 0x17);
          FUN_0045efbb();
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        }
        if (*(int *)(unaff_EBP + 0x1c) != 0) {
          puStack_15c = (undefined4 *)0x75802c;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          puStack_15c = (undefined4 *)0x75803c;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          puStack_15c = (undefined4 *)(unaff_EBP + -0xd0);
          FUN_00449749();
          uVar5 = FUN_00449713();
          *(undefined1 **)(unaff_EBP + 0x14) = &stack0xfffffe9c;
          FUN_00448a17(uVar5);
          uVar5 = *(undefined4 *)(unaff_EBP + 0x10);
          iVar4 = *(int *)(unaff_EBP + 8) + iVar6;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_004115d9(iVar4,uVar5);
          FUN_00448e3a(iVar4,uVar5);
          *(undefined1 *)(unaff_EBP + -4) = 8;
          puStack_15c = (undefined4 *)0x7580a2;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            puStack_15c = (undefined4 *)0x7580ad;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          puStack_15c = (undefined4 *)0x7580bd;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            puStack_15c = (undefined4 *)0x7580c8;
            FUN_00878dfb();
          }
        }
        if (*(int *)(unaff_EBP + 0x20) != 0) {
          puStack_15c = (undefined4 *)0x7580d8;
          (*pcVar7)();
          puStack_15c = (undefined4 *)(unaff_EBP + -0x60);
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            puStack_15c = (undefined4 *)0x7580ee;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          puStack_15c = (undefined4 *)0x7580fe;
          FUN_00449713();
          *(undefined4 ***)(unaff_EBP + 0x14) = &puStack_15c;
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_0044974c();
          iVar4 = FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          *(bool *)(unaff_EBP + 0x17) =
               **(uint **)(unaff_EBP + 0x20) < (uint)(iVar4 + iVar6 + *(int *)(unaff_EBP + 8));
          puStack_15c = (undefined4 *)0x758138;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            puStack_15c = (undefined4 *)0x758143;
            FUN_00878dfb();
          }
          if (*(char *)(unaff_EBP + 0x17) != '\0') {
            puStack_15c = (undefined4 *)0x75814f;
            (*pcVar7)();
            puStack_15c = (undefined4 *)(unaff_EBP + -0x80);
            iVar4 = FUN_00402e32();
            if (iVar4 < 0) {
              puStack_15c = (undefined4 *)0x758165;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            puStack_15c = (undefined4 *)0x758175;
            FUN_00449713();
            *(undefined4 ***)(unaff_EBP + 0x14) = &puStack_15c;
            FUN_00448a17();
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            FUN_0044974c();
            iVar4 = FUN_00448ebb();
            *(undefined1 *)(unaff_EBP + -4) = 5;
            **(int **)(unaff_EBP + 0x20) = iVar4 + iVar6 + *(int *)(unaff_EBP + 8);
            puStack_15c = (undefined4 *)0x7581ab;
            iVar4 = FUN_00402bc3();
            if (iVar4 < 0) {
              puStack_15c = (undefined4 *)0x7581b6;
              FUN_00878dfb();
            }
          }
        }
        iVar6 = 0;
        if (*(int *)(unaff_EBP + 0x18) == 0) {
          puStack_15c = (undefined4 *)0x7581c7;
          FUN_00878dfb();
        }
        iVar4 = FUN_004a2734();
        *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 4 + iVar4;
        if (*(int *)(unaff_EBP + 0x18) == 0) {
          puStack_15c = (undefined4 *)0x7581e9;
          FUN_00878dfb();
        }
        iVar4 = FUN_004a2734();
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4 + iVar4;
LAB_0075834b:
        FUN_00414f29();
      }
      if (*(int *)(unaff_EBP + 0x20) != 0) {
        puStack_15c = (undefined4 *)0x758363;
        (*pcVar7)();
        puStack_15c = (undefined4 *)(unaff_EBP + -0x50);
        iVar4 = FUN_00402e32();
        if (iVar4 < 0) {
          puStack_15c = (undefined4 *)0x758379;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        puStack_15c = (undefined4 *)0x758389;
        FUN_00449713();
        *(undefined4 ***)(unaff_EBP + 0x14) = &puStack_15c;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_0044974c();
        iVar4 = FUN_00448ebb();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        *(bool *)(unaff_EBP + 0x17) =
             **(uint **)(unaff_EBP + 0x20) < (uint)(iVar4 + iVar6 + *(int *)(unaff_EBP + 8));
        puStack_15c = (undefined4 *)0x7583c3;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          puStack_15c = (undefined4 *)0x7583ce;
          FUN_00878dfb();
        }
        if (*(char *)(unaff_EBP + 0x17) != '\0') {
          puStack_15c = (undefined4 *)0x7583da;
          (*pcVar7)();
          puStack_15c = (undefined4 *)(unaff_EBP + -0x40);
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            puStack_15c = (undefined4 *)0x7583f0;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          puStack_15c = (undefined4 *)0x758400;
          FUN_00449713();
          *(undefined4 ***)(unaff_EBP + 0x14) = &puStack_15c;
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          FUN_0044974c();
          iVar4 = FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          **(int **)(unaff_EBP + 0x20) = iVar4 + iVar6 + *(int *)(unaff_EBP + 8);
          puStack_15c = (undefined4 *)0x758436;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            puStack_15c = (undefined4 *)0x758441;
            FUN_00878dfb();
          }
        }
      }
      puStack_15c = (undefined4 *)0x75844a;
      iVar4 = (*DAT_0097b584)();
      *(int *)(unaff_EBP + -0x1c) = iVar4;
    } while (iVar4 != *(int *)(unaff_EBP + -0x10));
  }
  if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) || (**(char **)(unaff_EBP + -0x14) == '\0')) {
    if (iVar6 < 1) goto LAB_0075854d;
  }
  else if (*(int *)(unaff_EBP + 0x1c) != 0) {
    puStack_15c = (undefined4 *)0x75847a;
    (*pcVar7)();
    puStack_15c = &DAT_00980690;
    puStack_15c = (undefined4 *)FUN_00402e32();
    if ((int)puStack_15c < 0) {
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    (*pcVar7)();
    puStack_15c = (undefined4 *)(unaff_EBP + -0x40);
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      puStack_15c = (undefined4 *)0x7584b0;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00449749();
    uVar5 = FUN_00449713();
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xfffffe9c;
    FUN_00448a17(uVar5);
    uVar5 = *(undefined4 *)(unaff_EBP + 0x10);
    iVar6 = iVar6 + *(int *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_004115d9(iVar6,uVar5);
    FUN_00448e3a(iVar6,uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_15c = (undefined4 *)0x758502;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_15c = (undefined4 *)0x75850d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_15c = (undefined4 *)0x75851a;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_15c = (undefined4 *)0x758525;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    puStack_15c = (undefined4 *)0x75853b;
    FUN_00878dfb();
  }
  iVar4 = FUN_004a2734();
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4 + iVar4;
LAB_0075854d:
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    puStack_15c = (undefined4 *)0x75856a;
    (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    puStack_15c = (undefined4 *)0x758587;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x18) != (int *)0x0) {
    puStack_15c = (undefined4 *)0x758598;
    (**(code **)(**(int **)(unaff_EBP + 0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}


